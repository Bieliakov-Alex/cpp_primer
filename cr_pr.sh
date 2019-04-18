#!/bin/bash

# checking usage
if [ $# -ne 1 ];
then
    echo "Please, specifi project name"
    exit 1;
fi

cd ~/projects/cpp_primer/

# checking existanse of project
if [ -d "$1" ];
then
    echo "Project with this name exists. Please, enter unique project name."
    exit 1;
fi

# creating project structure
mkdir $1
cd $1
touch CMakeLists.txt
touch main.cpp
mkdir build

# creating cmake
CMAKE_TEXT=$"project(\"$1\")\n\nadd_executable($1 main.cpp)"
echo  -e $CMAKE_TEXT > CMakeLists.txt
