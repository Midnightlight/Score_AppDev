#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// usually these information are given in a header line:
// 1. Constant definition (e.g. , #define PI 3.1415)
// 2. Data structure definitions
// 3. Function prototypes (a.k.a function declaration)

#define MAX 30
// this line was conflicted and it has been resolved.

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);
