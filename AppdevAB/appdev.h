#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#define N 20
//Modify on Github
typedef struct {
	int max;
	int min;
	char rname[N];
}rock;

void send_data(rock);
