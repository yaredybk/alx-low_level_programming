#!/bin/bash
git add .
echo "type commit message!\n"
read commitm
git commit -m $commitm
git push
