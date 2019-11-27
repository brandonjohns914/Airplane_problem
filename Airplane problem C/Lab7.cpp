//
//  Lab7.cpp
//  Lab7
//
//  Created by Brandon Johns on 4/10/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//
#include <iostream>
#include "Lab7.h"

using namespace std;

//Define constant variables
const int rowSize = 7;
typedef char Column[4];
typedef Column ColumnSize[rowSize];
ColumnSize seatAllocation;






void printArray(char *arr, int size)
{
    
    for(int i = 0; i < size; ++i)
    {
        
        cout << arr[i] << " ";
        
    }
    
    cout << endl;
    
}

char *delete_repeats(char *arr, int &size)
{
    
    char *newarr = new char[size];
    
    int count = 0;
    
    for(int i = 0; i < size; ++i){
        
        int flag = 0;
        
        for(int j = 0; j < i; ++j){
            
            if(arr[i] == arr[j]){
                
                flag = 1;
                
                break;
                
            }
            
        }
        
        if(!flag){
            
            newarr[count++] = arr[i];
            
        }
        
    }
    
    size = count;
    
    return newarr;
    
}

