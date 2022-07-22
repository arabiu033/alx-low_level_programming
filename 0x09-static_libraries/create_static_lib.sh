#!/bin/bash
cc -fpic -c *.c
ar rc liball.a *.o
ranlib liball.a
