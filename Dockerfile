# Used to create enviroment for compiling C programs
# To create container: docker run --name cs50 -it -v <PROJECT_ROOT>:<SRC> <IMAGE> bash
FROM ubuntu:latest

# Configure proxy
ENV http_proxy=http://user:passwd@addres:port

# Configure C language libraries
RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install --no-install-recommends --no-install-suggests -y make
RUN apt-get install --no-install-recommends --no-install-suggests -y gdb
RUN apt-get install --no-install-recommends --no-install-suggests -y valgrind

ENV SRC /home/src
ENV OUT /home/out

RUN mkdir $SRC
RUN mkdir $OUT

WORKDIR $SRC
