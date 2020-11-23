/*
Program: first.c
Course: SOL1 WS2020
Authors: Adelina Jasko, Igor Kojanin
Date: 18.11.2020

This program outputs a text

*/

#include <stdio.h>
int main()
{
    // According to the task using exactly one printf command per line 

    printf("According to \"Murphy's law\" from 1949 \(https://en.wikipedia.org/wiki/Murphy%%27s_law)\"\n"); // we need to add "\" in order to use brackets in the sentance
    printf("we believe \"what can go wrong will go wrong sometimes\".\n"); // we use \n to move the next sentance on the next line
    printf("For better programming skills and less errors\n");
    printf("we need to spend 50 %% of our time for practical exercising. \n \n"); //in order to log "%" we need to type "%%" so the computer does not give an error
    printf("\n \n With german letters you may have your trouble, too, like in\n");
    printf("\"h%crt mit Spa%c viel %cber sch%cne Dinge\".\n ", 148, 225, 129, 148); 

    //printf("sch%cn", 148); // in order to use special letters we 


    return 0;
}