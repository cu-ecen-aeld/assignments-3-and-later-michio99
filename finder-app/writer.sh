#!/bin/bash

# Accepts the following arguments: the first argument is a full path to a file (including filename) on the filesystem, referred to below as writefile; the second argument is a text string which will be written within this file, referred to below as writestr
# Exits with value 1 error and print statements if any of the arguments above were not specified
# Creates a new file with name and path writefile with content writestr, overwriting any existing file and creating the path if it doesn’t exist. Exits with value 1 and error print statement if the file could not be created.

if [ $# -ne 2 ]
then
    echo "error1"
    exit 1
fi

file_name=$1
file_path="$(dirname "$file_name")"
write_str=$2

echo $file_path
mkdir -p $file_path
echo $write_str > $file_name

# if [[ -w "$file_path" ]]
# then
#     mkdir -p $file_path
#     echo $write_str > $file_name
# else
#     echo "error"
#     exit 1
# fi

