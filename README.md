# DoorLock

## Description
A pin-code door lock, with admin panel to add new users

## Motivation
Create a full GUI system, that is suitable for use in real buildings

## Technologies
- C++

## Progress
- CLI for Admin panel (v0.0.1b)
- CLI for client (v0.0.1b)
- developmental data storing (in .json file)(v0.0.1b)


## In the pipeline
- create GUI (CEF)
- add database to connect admin and client side program
- test

## How to
### I use the clang++ compiler, however if you use another compiler, swap clang++ for your compiler prefix

- install nlohmann-json (https://github.com/nlohmann/json)
- clone code
- compile admin with command $clang++ ./admin/*.cpp -I/usr/local/Cellar/nlohmann-json/3.7.3/include -std=c++11 -o ./admin/admin
- compile client with command $clang++ ./lock/*.cpp -I/usr/local/Cellar/nlohmann-json/3.7.3/include -std=c++11 -o ./lock/lock
