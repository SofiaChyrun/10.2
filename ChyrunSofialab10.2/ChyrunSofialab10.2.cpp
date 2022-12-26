// ChyrunSofialab10.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_10_2.cpp
// < Чирун Софія >
// Лабораторна робота № 10.2
// Пошук слів у текстовому файлі  
// Варіант 18

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

size_t MinLength(const string s)
{
	int k = 0;
	size_t len = 0,
		min;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("abcdfeghijklmnopqrstuvwxyz", start)) != -1)
	{
		finish = s.find_first_not_of("abcdfeghijklmnopqrstuvwxyz", start + 1);
		if (finish == -1)
		   finish = s.length();
		len = finish - start;
		if (k == 0)
		   min = len;
		k++;
		if (len < min)
		   min = len;
		start = finish + 1;
	}
	return min;
}

void CreateTXT(char* fname) 
{
	ofstream fout(fname); 
	char ch; 
	string s; 
	do
	{
	   cin.get(); 
	   cin.sync(); 
	   cout << "enter line: "; getline(cin, s); 
	   fout << s << endl; 
	   cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}

void PrintTXT(char* fname) 
{
	ifstream fin(fname);  
	string s,d; 
	while (getline(fin, s)) 
	{
		d = d + s+" ";
		cout << s << endl;
	}
	cout << endl;
	cout << "Length of min groups of words leters: " << MinLength(d) << endl;
}

int main()
{
	char fname[100]; 
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname); 
	PrintTXT(fname); 
	return 0;
}
