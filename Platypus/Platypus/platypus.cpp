//
//  driver.cpp
//  Platypus
//
//  Created by Peter Azmy on 3/4/19.
//  Copyright © 2019 Peter Azmy. All rights reserved.
//
#include <iostream>
#include <ctime>
#include "platypus.h"

using namespace std;


Platypus::Platypus()
: Alive(true), Mutant(false)
{
}

Platypus::Platypus(char gender, float weight, short age, char name, bool alive, bool mutant){
    
    if((toupper(gender) == 'M' || toupper(gender) == 'F') && weight > 0 && age > 0 && isalpha(name) &&
       (alive== true| alive == false) && (mutant ==true || mutant == false)){
        Gender = toupper(gender);
        Age = age;
        Alive = alive;
        Name = toupper(name);
        Mutant = mutant;
        Weight = weight;
    }
    else
        cerr << "Invalid Input" << endl;
}

unsigned Platypus::getGender() const{
    return Gender;
}

unsigned Platypus::getMutant() const{
    return Mutant;
}

unsigned Platypus::getAge() const{
    return Age;
}

unsigned Platypus::getWeight() const{
    return Weight;
}


unsigned Platypus::getAlive() const {
    return Alive;
}

unsigned Platypus::getName() const{
    return Name;
}


void Platypus::print(ostream & out) const{
    out << " Name: "<< Name << "."<< endl << " Gender: " << Gender << endl <<  " Age: " <<  Age << endl <<  " Weight: " << Weight << endl
    << (Alive == true ? " Alive" : " Dead") << endl << (Mutant == true ? " Mutant" : " Not Mutant") << endl << endl;
}


void Platypus::read(istream & in){
    float weight;
    short age;
    char name, gender,chr;
    bool alive, mutant;
        while(1){
        cout << " Platypus First Initial: ";
        in >> name >> chr;
        cout << " Gender (M or F): ";
        in >> gender ;
        cout << " Age (in Years): ";
        in >> age ;
        cout << " Weight: ";
        in >> weight;
        cout << " 1 for Alive and 0 for Dead: ";
        in >> alive ;
        cout << " 1 for Mutant and 0 for Not Mutant: ";
        in >> mutant;
        
      
        if((toupper(gender) == 'M' || toupper(gender) == 'F') && weight > 0 && age > 0 && isalpha(name) &&
           (alive==true|| alive==false) && (mutant ==true|| mutant ==false)){
            Gender = toupper(gender);
            Weight = weight;
            Age = age;
            Name = toupper(name);
            Alive = alive;
            Mutant = mutant;
            break;
        }
        else
            cerr << "Invalid Input" << endl;
    }
}


void Platypus::age_me(short aging){
   
    srand(time(NULL));
    Age += aging;
    
    if(Mutant == false){
        if(rand()%101 < 98)
            Mutant = false;
        else
            Mutant = true;
    }
   
    if(rand()%101 < (100-10*Weight))
        Alive = true;
    else
        Alive = false;
}


void Platypus::birth(){
    
    srand(time(NULL));
    char name;
    float randWeight=(rand() %  10 + 1);
    Alive = true;
    Mutant = false;
    Age = 0;
    
    
    if(rand()%2 > 0){
        Gender = 'M';
        cout << "Congrats the platypus is a boy! What would you like to name your little one? ";
        cin >> name;
    }
    else{
        Gender = 'F';
        cout << "Congrats the platypus is a girl! What would you like to name your little one? ";
        cin >> name;
    }
    Name = name;
    Weight =  randWeight/10;
}

void Platypus::eat(){
    
    srand(time(NULL));
    cout << "Time to feed " << Name << endl;

    if (Alive == 1){
       
        float percent = (rand()%50 +1);
        Weight += Weight * (percent/1000);
        cout << "After that great meal Platypus " << Name << " now weighs " << Weight << endl<<endl;
    }
    else
        cout << "Looks like platypus " << Name << " is dead" << endl << endl;
}


void Platypus::fight(Platypus & Platypus2){
   
    srand(time(NULL));
    cout << "Oh no! Your platypus " << Name << " has wondered on to tall grass and has gotten into a fight with another platypus."<< endl << endl;
    cout << "\t\t\t\t*Rocky's theme plays*"<<endl<< endl;
    cout << "Looks like a brutal fight! Lets look at the stats of the oppenets."<< endl << Platypus2;
    
    bool OP_Alive = Platypus2.getAlive();
    float OP_weight = Platypus2.getWeight();
   
    float FR = (Weight/OP_weight)*50;
    
    if((rand()%100)+1 < FR)
        OP_Alive = false;
    else
        Alive = false;
    if(Alive == true)
        cout << "Wow! what a fighter, platypus " << Name << " won!"<< endl<< endl << endl;
    else
        cout << "Oh no! Platypus " << Name << " is down! Help is on their way!" << endl << endl << endl;
}


void Platypus::random(){
    
    srand(time(NULL));
    int MorF = rand()%2 +1;
    Weight = rand()%10 + 1;
    Alive = true;
    Mutant = rand()%2 +1;
    if (MorF == 1)
        Gender = 'M';
    else
        Gender = 'F';
}

ostream & operator << (ostream & out, const Platypus & p){
    p.print(out);
    return out;
}

istream & operator>>(istream & in, Platypus & p){
    p.read(in);
    return in;
}
