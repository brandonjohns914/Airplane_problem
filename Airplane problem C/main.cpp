//
//  main.cpp
//  Lab7
//
//  Created by Brandon Johns on 4/10/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>
#include "Lab7.h"
#include "Lab7.cpp"
#include <cstdlib>
#include <cstddef>
using namespace std;

int main()
{
    
    
    ColumnSize airplane;
 
    int row;
    int seatNum;
    int r;
    int s;
    char seat;
    //Initialize seating to empty
    for(r = 0; r <= rowSize; r++)
    {
        for (s = 0; s < 4; s++)
        {
            airplane[r][s] = char ('A' + s);
        }
        
    }
    
   
    cout << "A small airplane with seat numbering as follows:" <<endl;
    
    // Display seats
    for(r = 1; r <= rowSize; r++)
    {
        for (s = 0; s < 4; s++)
        {
            cout << airplane[r][s] << " ";
            if(s == 1 )
                cout << " ";
        }
        cout << endl;
    }
    char choice = 'a';
    cout << "Taken seats have an 'X'" <<endl;
    cout<< "There are " << rowSize << " rows. Seats are A, B, C, D." <<endl;
    while(true)
    {
        //Prompt and read input
        cout <<"Enter your choice to seat number (5A or 3B) " <<endl;
        cin >> row >> seat;
        seatNum = seat - 'A';
        if('X' != airplane[row][seatNum])
        {
            airplane[row][seatNum] = 'X';
        }
        else
        {
            cout << "That seat is occupied already. So, please choose another seat.\n";
        }
        //Display current seating
        for(r = 1; r <= rowSize; r++)
        {
            for (s = 0; s < 4; s++)
            {
                cout << airplane[r][s] << " ";
                if(s == 1 )
                    cout << " ";
            }
            cout << endl;
        }
        //Prompt and read input
        cout << "Press N to quit";
        cin >> choice;
        if(choice=='n' || choice=='N')
            exit(0);
    }
    
    
    char arr[] = "My name is Brandon";
    
    int size = sizeof(arr);
    
    printArray(arr, size);
    
    cout << "After deleting the duplicates" << endl;
    
    char *newarr = delete_repeats(arr, size);
    
    printArray(newarr, size);

    return 0;
}
