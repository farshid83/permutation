/*
 * permutation.cpp
 *
 */

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void permute(string prefix, string str)
{
	if(str.length() == 0)
		cout << prefix << "\n";
	else
	{
		for(int i = 0; i < str.length(); i++)
		{
			string punctured_str = str.substr(0,i) + str.substr(i+1); // take char@i from str
			//cout << "punctured_str = " << punctured_str << "\n";
			permute(prefix + str[i], punctured_str);
		}
	}
}

void combine(string prefix, string* str, int size)
{
	if(size == 0)
		cout << prefix << "\n";
	else
	{
		for(int i = 0; i < str[0].length(); i++)
		{
			combine(prefix + str[0][i], str+1, size-1);
		}
	}
}

int main(int argc, char* argv[])
{
	permute("", "123");
	string STR[3] = {"ABCD", "01", ".,;"};
	combine("", STR, 3);
	return 0;
}
