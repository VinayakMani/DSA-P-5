// Program to implement the operations like copy,concatenation,reverse and length of string
#include <iostream>
#include <string.h>
using namespace std;
int main() {

	char str1[100] = "I am vinayak mani ,";
	char str2[100] = " student of cse department of CUH.";
	char str3[100];

	int  len,i;

	string str= "my roll number is 202132";
    cout<<"\nPrinting string in reverse\n\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }

	strcpy(str3, str1);
	cout << "\n\ncopying a string : " << str3 << endl;

	strcat(str1, str2);
	cout << "\nconcatenation of string : " << str1 << endl;

	len = strlen(str1);
	cout << "\nlength of a string : " << len << endl;

	return 0;
}
