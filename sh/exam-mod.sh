#!/bin/bash

SORULAR=$(ls .sorular/lavel1/)
SORUSAYISI=$(ls -l .sorular/lavel1/ | wc -l)
RSAYI=$((RANDOM%SORUSAYISI))
SECILENSORU=$(./src/sec $RSAYI $SORULAR)
mv .sorular/lavel1/$SECILENSORU ./subject
