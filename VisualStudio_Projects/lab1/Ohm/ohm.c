/***********************************************************************************************************
Program: Ohm.c
Course: SOL1 WS2020
Authors: Adelina Jasko, Igor Kojanin
Date: 18.11.2020

This program asks the user for a voltage U and a current I and
then calculates the resistance value R according to the famous formula Ohm’s law:

************************************************************************************************************/
#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>

int main()
{
    //we are using the data type float, which represents decimal (floating point) numbers

    float current; // initialazing the variables
    float voltage; // we are using floats in case the answer will have numbers after "."
    float resistance; // names of the variables are in the accordance with the formula

    printf("Please enter voltage in Volt: ");  // Navigating user to give the value of the voltage
    scanf("%f", &voltage); // Reciving the value from the user and assigning it to the variable
    printf("Please enter current in Ampere: ");  // Navigating user to give the value of the current 
    scanf("%f", &current); // Reciving the value and assigning it to the variable
    resistance = voltage / current; // here we apply the formula from Ohm's law

    printf("The Resistance of the consumer is: %f Ohm\n ",resistance); // output is the result of the calculation of the formula


    return 0;
}