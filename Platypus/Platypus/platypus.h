//
//  platypus.h
//  Platypus
//
//  Created by Peter Azmy on 3/4/19.
//  Copyright © 2019 Peter Azmy. All rights reserved.
//

#ifndef platypus_h
#define platypus_h
#include <string>
#include <iostream>
using namespace std;

class Platypus{
public:
   
    Platypus();
    Platypus(char gender, float weight, short age, char name, bool alive, bool mutant);
    
    
    unsigned getWeight() const;
    unsigned getAlive() const;
    unsigned getName() const;
    unsigned getMutant() const;
    unsigned getAge() const;
    unsigned getGender() const;
    
    void age_me(short aging);
    void fight(Platypus & Platypus2);
    void eat();
    void birth();
    void random();
    
    void print(ostream & out) const;
    void read(istream & in);
    
private:
    
    float Weight;
    short Age;
    char Name, Gender;
    bool Alive, Mutant;
};
ostream & operator<<(ostream & out, const Platypus & p);
istream & operator>>(istream & in, Platypus & p);

#endif
