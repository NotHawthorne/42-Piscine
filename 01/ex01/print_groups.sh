#!/bin/sh

printf %s "$(groups $FT_USER | sed -e 's/ /,/g')"
