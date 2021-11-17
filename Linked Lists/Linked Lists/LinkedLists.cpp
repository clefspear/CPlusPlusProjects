//
//  main.cpp
//  Linked Lists
//
//  Created by Peter Azmy on 3/16/19.
//  Copyright © 2019 Peter Azmy. All rights reserved.
//

#include <iostream>
#include "LinkedLists.h"
using namespace std;
//menu function prototype
int menu();
int main(int argc, const char * argv[]){
        int choice;
        int element;
        List list;
     cout<<"\nWelcome to Your Personal Organizer!"<<endl;
        do
        {
            //call menu method
            choice=menu();
            
            switch(choice)
            {
                case 1:
                    //Insert element
                    cout<<"Enter Number: ";
                    cin>>element;
                    //call Insert metod
                    list.InsertAtEnd(element);
                    break;
                case 2:
                    //Delete element
                    cout<<"Enter Number to delete: ";
                    cin>>element;
                    list.Delete(element);
                    break;
                case 3:
                    //Display elements
                    list.Display();
                    break;
                case 4:
                    //print smallest
                    cout<<"\nThe Smallest Number is "<<list.Smallest()<<"\n";
                    break;
                case 5:
                    //print largest
                    cout<<"\nThe Greatest Number is "<<list.Greatest()<<"\n";
                    break;
                case 6:
                    //print range
                    cout<<"\nRange: "<<list.Range()<<"\n";
                    break;
                case 7:
                    //exit the program
                    cout<<"Have a Great Day!";
                    break;
                default:
                    cout<<"Invalid choice. Please Type a Number 1-7"<<endl;
            }
        }while(choice!=7);
    }
    
    int menu()
    {
        int choice;
        cout<<"\n\t1.Insert"<<endl;
        cout<<"\t2.Delete"<<endl;
        cout<<"\t3.Display"<<endl;
        cout<<"\t4.Smallest"<<endl;
        cout<<"\t5.Largest"<<endl;
        cout<<"\t6.Range"<<endl;
        cout<<"\t7.Exit\n"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        return choice;
    }
