#!/bin/bash

CFLAGS=-fPIC CXXFLAGS=-fPIC ./configure --without-crypto --without-zlib --enable-shared=no --without-python --prefix=$PREFIX
make -j $CPU_COUNT
make install

rm $PREFIX/bin/xsltproc
