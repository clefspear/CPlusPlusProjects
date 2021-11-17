//
//  driver.cpp
//  Linked Lists
//
//  Created by Peter Azmy on 3/16/19.
//  Copyright © 2019 Peter Azmy. All rights reserved.
//

#include <stdio.h>
#include "LinkedLists.h"
#include<iostream>
using namespace std;
int space;

List::List()
{
    space=0;
    for(int index=0;index<MAX;index++)
        listArray[index]=0;
}

bool List::Empty()
{
    return space==0;
}

//Insert the element
void List::InsertAtEnd(ElementType ele)
{
    if(space<MAX)
    {
        listArray[space]=ele;
        space++;
    }
}

//Removes an element
void List::Delete(ElementType ele)
{
    bool found=false;
    int poss=-1;
    for(int index=0;index<space &&!found;index++)
    {
        if(listArray[index]==ele)
        {
            found=true;
            poss=index;
        }
    }
    
    if(found)
    {
        for(int index=poss;index<space;index++)
        {
            listArray[index]=listArray[index+1];
        }
        space--;
    }
}

//Prints the total elememnts in the list
void List::Display()
{
     cout<<"\n--------------------------\n"<<endl;
    for(int index=0;index<space;index++)
    {
        cout<<"listArray["<<index<<"] = "<<listArray[index]<<endl;
         cout<<"\n"<<endl;
    }
     cout<<"--------------------------"<<endl;
}
//Returns the smallest number
int List::Smallest()
{
    //Assume first element is minimum
    int minimum=listArray[0];
    cout<<"\n--------------------------\n"<<endl;
    for(int index=1;index<space;index++)
    {
        if(listArray[index]<minimum)
            
            minimum=listArray[index];
    }
    return minimum;
}
//Returns the largest number
int List::Greatest()
{
    //Assume first element is maximum
    int maximum=listArray[0];
    cout<<"\n--------------------------\n"<<endl;
    for(int index=1;index<space;index++)
    {
        if(listArray[index]>maximum)
            maximum=listArray[index];
    }
    return maximum;
    
}
//Returns the largest -smallest number
int List::Range()
{
    int maximum=listArray[0];
    
    for(int index=1;index<space;index++)
    {
        if(listArray[index]>maximum)
            maximum=listArray[index];
    }
    
    int minimum=listArray[0];
   
    for(int index=1;index<space;index++)
    {
        if(listArray[index]<minimum)
            
            minimum=listArray[index];
    }

    return maximum - minimum;
    
}
