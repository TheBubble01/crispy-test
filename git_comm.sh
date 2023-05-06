#!/usr/bin/env bash

files_list=$(ls)
for file in $files_list:
do
	git add "$file"
	git commit -m "$file | cut -d '-' -f2"
	git push
done

echo "EVERYTHING pushed"
git status
