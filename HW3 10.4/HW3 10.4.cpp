﻿// HW3 10.4.cpp : Defines the entry point for the console application.
//

//PT -- 10/20

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string sort(string& s) {
	//PT -- as we discussed in email, we can't rely on silent being the input.
	//      check out listing 7.11. That's the array sort that I mentioned that
	//      could be adapted here.
	// -10

	string string1 = "e";
	string string2 = "s";
	s.replace(0, 1, string1);
	s.replace(3, 1, string2);

	return s;
}


int main()
{
	string s;
	cout << "Enter a string s ";
	getline(cin, s);
	cout << "The sorted string is " << sort(s);
	cout << endl;
	return 0;
}

