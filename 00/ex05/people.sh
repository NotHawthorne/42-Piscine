#!/bin/sh
ldapsearch -Q "uid=z*" cn | sort -r --ignore-case | grep "cn:" | sed 's/cn: //'
