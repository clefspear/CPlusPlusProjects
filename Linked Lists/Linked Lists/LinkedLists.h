//
//  Header.h
//  Linked Lists
//
//  Created by Peter Azmy on 3/16/19.
//  Copyright © 2019 Peter Azmy. All rights reserved.
//

#ifndef Header_h
#define Header_h

typedef int ElementType;
const int MAX =100;
class node{ ElementType data; node * next; };

class List {
public: List(); //Create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); //Display the data values in the list in the order inserted
    int Sum(); // Compute and return the sum of the values in the list
    int Average(); // Compute and return the average of the values in the list
    int Smallest();
    int Greatest();
    int Range();

private:
    node * first;
    int N;
    //the array to hold the list values
    ElementType listArray[MAX];
    //think of other data members that can potentially make your life easier:
    //node* last?
    //count ?
};
#endif /* Header_h */
