#include "String_Class.h"
#include <string>

String_Class::String_Class() //Конструктор за замовчуванням
{
    value = " ";
}

String_Class::String_Class(std::string str) //Конструктор с параметром
{
    value = str;
}

String_Class::String_Class(const String_Class& other_value) //Конструктор копіювання
{
    value = other_value.value;
}

std::string String_Class::Get_Word()
{
    return value;
}

void String_Class::Set_Word(const std::string str)
{
    String_Class::value = str;
}


int String_Class::Get_Length()
{
    return value.length();
}

void String_Class::Sort_Descending()
{
    int n = value.length();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (value[j] < value[j + 1])
            {
                char temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }

        }
    }
}

String_Class::~String_Class()
{

}