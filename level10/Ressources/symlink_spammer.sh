#!/bin/bash

while true; do
	touch link
	rm -f link
	ln -s /home/user/level10/token link
	rm -f link
done
