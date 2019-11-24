#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def sumaReloj(i,j):
    suma = 0
    for x in range(3):
        for y in range(3):
            if(x!=1):
                suma+=arr[i+x][j+y]
    suma+=arr[i+1][j+1] 
    return suma
    
def hourglassSum(arr):
    maximo = -99999999
    for i in range(4):
        for j in range(4):
            if(maximo < sumaReloj(i,j)):
                maximo = sumaReloj(i,j)
    return maximo

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
