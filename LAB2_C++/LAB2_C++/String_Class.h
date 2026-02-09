#pragma once
#include <string>
class String_Class
{
private:
	std::string value;
public:


	String_Class(); //Конструктор за замовчуванням
	String_Class(std::string str); //Конструктор с параметром 
	String_Class(const String_Class &other_value); //Конструктор копіювання

	std::string Get_Word(); 
	void Set_Word(const std::string str);

	int Get_Length();


	void Sort_Descending();

	~String_Class();
};

