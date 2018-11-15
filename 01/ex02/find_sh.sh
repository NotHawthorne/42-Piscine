#!/bin/sh

find . -type f -name "*.sh" -print | sed  "s/\.sh$//;s@.*/@@"
