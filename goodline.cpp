// goodline.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <conio.h>



using namespace std;

int main() {
	
	const int N = 100;
	int k = 0;
	const char *SEPARATORS = " ";       
	char words[100][100], cur[100];
	cout << "Your string:\n";
	//char S[N] = "yourapp the quick brown fox jumps over the lazy dog";   //Строка для анализа
	char S[N];
	cin.getline(S,N);    //task 5
	char *ptr = 0;      
	char *next = 0;
	ptr = strtok_s(S, SEPARATORS, &next); 
		
	while (ptr) {		//while (ptr != NULL)
		
		
		strcpy_s(words[k], ptr);
		k++;
		cout << ptr << '\n';
		ptr = strtok_s(0, SEPARATORS, &next);   
	}

	cout << endl << "task 2" << endl;
	for (int i = 0; i<k - 1; i++)
		for (int j = i + 1; j<k; j++)
			if (strcmp(words[i], words[j])>0)
			{
				strcpy_s(cur, words[i]);
				strcpy_s(words[i], words[j]);
				strcpy_s(words[j], cur);
			}
	cout << "Results:\n";
	for (int i = 0; i<k; i++)
	cout << words[i] << "\n";

	cout << endl << "task 3" << endl;
	cout << "Results:\n";
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
			if (strcmp(words[i], words[j]) == 0)
			{
				i++;
			}

		cout << words[i] << "\n";
	}

	cout << endl << "task 4" << endl;
	cout << "Results:\n";
	int p = 1;
	for (int i = 0; i < k - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
			if (strcmp(words[i], words[j]) == 0)
			{
				p++;
				cout << words[i]; cout << " " << p << endl;
			}

		cout << words[i]; cout << " 1" <<  endl;
	}
	cin.get();

	
}