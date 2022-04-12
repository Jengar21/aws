#!/bin/zsh
if [ $# -lt 2 ]; then
  echo "usage:$0 path-and-file-name-to-be-downloaded-from-AWS local-name"
  echo "  don't forget to set the AWS environment variables"
  exit 1
fi
scp -i $AWS_UB_PEM ${AWS_UB_USER}@${AWS_UB_INSTANCE}:$1 $2
