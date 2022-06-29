#!/bin/bash
# Colors

purple=$'\033[1;34m'
reset=$'\033[0;39m'
red=$'\033[0;31m'
green=$'\033[0;32m'

echo ${green}"[created by eryilmaz]"
echo ""
echo ${green}"Hoşgeldiniz"
echo ""
cev=$(./src/cev)
if [ $cev = "0" ]; then
    echo "user_authentication"
    ./src/user_authentication
else
    ./src/user_authentication_login
    erdem=$(./src/cevst)
    if [ $erdem = "1" ]; then
       ./examshell
    else
        echo "[lütfen daha sonra tekrar deneyin]"
    fi
fi
#git pull
#mkdir .sorular
#cd .sorular
