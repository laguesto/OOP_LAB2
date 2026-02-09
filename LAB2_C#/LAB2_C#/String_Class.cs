using System;
using System.Collections.Generic;
using System.Text;

namespace LAB2_C_
{
    internal class String_Class
    {
        private string value;

        public String_Class() //Конструктор за замовчуванням
        {
            value = " ";

        }

        public String_Class(string str) //Конструктор с параметром 
        {
            str = "Aviation";
            value = str;
        }
        
        public String_Class(String_Class other_value) //Конструктор копіювання
        {
            value = other_value.value;
       }

        public void Set_Word(string str)
        {
            value = str;
        }
        public string Get_Word()
        {
            return value;
        }

        public int Get_Length()
        {
            return value.Length;
        }

        public void Sort_Descending()
        {
            char[] arr = value.ToCharArray();
            Array.Sort(arr);
            Array.Reverse(arr);
            value = new string(arr);
        }
        ~String_Class()
        {
            
        }

    }
}
