/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on September 22, 2017, 1:40 PM
 */

#include <iostream>

using namespace std;

// Insert your function here

int var = 0;

void increment(int increment)
{    
    var = increment + 1;
}

void increment(int increment, int i)
{
    var = increment + i;
}

int main(void) 
{
    
    for (int i = 0; i < 10; i++)
        if (i % 2) 
            increment(var);
        else
            increment(var, i);
    
    cout << var << endl;
    
    return 0;
}

