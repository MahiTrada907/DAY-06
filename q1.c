/*
Name: Mahi Trada
Roll: 590032198
Day: 06  Question: 1
Date: 16/08/2026

PROBLEM STATEMENT:
Write a program to convert temperature from Celsius to Fahrenheit.

*/


#include <stdio.h>
int main() {
    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("After swap: %d %d",a,b);
    return 0;
}
