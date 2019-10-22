// Client side C/C++ program to demonstrate Socket programming 
#include <stdio.h> 
#include<iostream>
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <string.h> 
#include <pthread.h>

#include "./sendReceive.cpp"

#define PORT 8080 