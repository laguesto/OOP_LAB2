#include <iostream>
#include <string>
#include "String_Class.h"
#include "../Class/Class.h"

int main()
{
    String_Class* word1 = new String_Class();
    String_Class* word2 = new String_Class("Aviation");
    String_Class* word3 = new String_Class(*word2);

    std::string value;


    std::cout << "Write a word1: ";
    std::cin >> value;
    word1->Set_Word(value);

    std::cout << "Length of the word1 is: " << word1->Get_Length() << std::endl;
    std::cout << "Length of the word2 and word3 is: " << word2->Get_Length() << std::endl;

    word1->Sort_Descending();
    std::cout << "Sorted word1: " << word1->Get_Word() << std::endl;

    word2->Sort_Descending();
    std::cout << "Sorted word2: " << word2->Get_Word() << std::endl;
    
    delete word1;
    delete word2;
    delete word3;

}

