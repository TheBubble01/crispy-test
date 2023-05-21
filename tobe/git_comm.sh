#!/usr/bin/env bash

files_list=$(ls)
files=0
for file in $files_list:
do
	files=$((files + 1))
	git add "$file"
	git commit -m "$file"
	git push
done

echo "$files PUSHED!"
