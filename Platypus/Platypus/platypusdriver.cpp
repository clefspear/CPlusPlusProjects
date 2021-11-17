#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>
#include <ctime>
#include "platypus.h"
using namespace std;

int main (){
  
    srand(time(NULL));
    
    
    Platypus myPlatypus,
    egg,
    randPlatypus;
    int aging;
    
   
    cout << "*************************************************************************" << endl;
    cout << "* You're Gonna Own a New Platypus, Congrats *"<<endl;
    cout << "*************************************************************************" << endl << endl;
    
    
    cout << "Enter The Platypus's information."<<endl;
    cin >> myPlatypus;
    cout << "Your Platypus information: " << endl << myPlatypus;
    
   
    cout<<"How much older is your platypus now, in Years?" << endl;
    cin >> aging;
    
    myPlatypus.age_me(aging);
    cout << "Your updated Platypus information: " << endl << myPlatypus;
    
   
    if(myPlatypus.getGender()=='M'){
        cout << "Looks like your Platypus is going to be a father and soon. The egg looks ready to hatch. " << endl << endl;
        cout << "\t\t\t\t*Egg starts to rattle*" << endl<<endl;
        egg.birth();
    }
    else{
        cout << "Looks like your Platypus is going to be a mother and soon. The egg looks ready to hatch. " << endl<< endl;
        cout << "\t\t\t*Egg starts to rattle*" << endl << endl;
        egg.birth();
    }
    
    cout << "The stats of the new born: " << endl << egg;
    
 
    myPlatypus.eat();
    egg.eat();
    
    
    char eag_name = egg.getName();
    cout << endl;
    
   
    if(myPlatypus.getAlive() == true){
        cout << "Your children were too excited and wondered off outside without you!" << endl;
        randPlatypus.random();
        myPlatypus.fight(randPlatypus);
    }
    else if(myPlatypus.getAlive() == false){
        cout << "Platypus " << eag_name << " was too excited and wondered off outside without you!" << endl;
        randPlatypus.random();
        egg.fight(randPlatypus);
    }
    
    cout << "**********************************************" << endl;
    cout << "* Hope You Loved Your Platypus *" << endl;
    cout << "**********************************************" << endl;
}
