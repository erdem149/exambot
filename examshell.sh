#!/bin/bash
# Colors

purple=$'\033[1;34m'
reset=$'\033[0;39m'
red=$'\033[0;31m'
green=$'\033[0;32m'

echo ${green}"[created by eryilmaz]"
echo ""
echo ${green}"Hoşgeldiniz"
read -p "${purple}examshell> ${reset}" input
echo ""
git pull
mkdir .sorular
cd .sorular
