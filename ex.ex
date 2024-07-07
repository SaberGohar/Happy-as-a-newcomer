#!/bin/bash

# Number of random files to create and commit
num_files=10

# Loop to create random files and commit them
for i in $(seq 1 $num_files)
do
  # Create a random file name
  filename="random_file_$i.txt"

  # Add random content to the file
  echo "This is random file number $i" > $filename

  # Stage the file
  git add $filename

  # Commit the file with a random message
  git commit -m "Add $filename with random content"
done

# Push the changes to the remote repository
git push origin main
