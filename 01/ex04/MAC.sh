#!/bin/sh

ifconfig | grep "^\tether" | sed 's/.*ether //' | tr -d ' '
