#!/bin/zsh
if [ $# -eq 0 ]; then
  echo "usage:$0 file-name-to-be-uploaded-to-AWS"
  echo "  don't forget to set the AWS environment variables"
  exit 1
fi
scp -i $AWS_UB_PEM $1 ${AWS_UB_USER}@${AWS_UB_INSTANCE}:$1
