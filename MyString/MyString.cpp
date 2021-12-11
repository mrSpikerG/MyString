#include <iostream>
#include "c_String.h"
int main()
{
    
    c_String *test = new c_String();

    char* firstTest = new char[80];
    gets_s(firstTest, 80);
    test->inputString(firstTest);

    test->showString();

    delete test;


    std::cout << "\n\n";


    char* secondTest = new char[80];
    gets_s(secondTest, 80);

    c_String* test2 = new c_String(secondTest);
    
    test2->showString();
   
    delete test2;

}