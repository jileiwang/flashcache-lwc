#!/bin/sh

rmmod flashcache

make clean

echo '==================================' >> make_log
date >> make_log
make >> make_log 2>&1

echo '==================================' >> make_install_log
date >> make_install_log
make install >> make_install_log 2>&1
