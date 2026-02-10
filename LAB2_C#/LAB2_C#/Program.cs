using Class;

String_Class word1 = new String_Class();
String_Class word2 = new String_Class("cup");
String_Class word3 = new String_Class(word2);

Console.Write("Enter word1: ");
word1.Set_Word(Console.ReadLine());

Console.Write("The lentgh of word1 is: " + word1.Get_Length());
Console.WriteLine();

Console.Write("The lentgh of word2 and word3 is: "+ word2.Get_Length());
Console.WriteLine();

word1.Sort_Descending();
Console.Write("Sorted word1: " + word1.Get_Word());


Console.WriteLine();

word2.Sort_Descending();
Console.Write("Sorted word2 and word3: " + word2.Get_Word());


