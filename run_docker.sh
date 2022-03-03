#!/bin/bash

docker build -t gh_ci_image .
docker run --rm -v $PWD:/workspace -w /workspace gh_ci_image:latest 
