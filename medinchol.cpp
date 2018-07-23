/* Michael Braunstein
Media =Inheritance 
June 13, 2018
*/

#include<iostream>
#include<istream>
#include<string>
#include"book.h"
#include"movie.h"
#include"medin.h"
#include"sort.h"

#ifdef  _MSC_VER

#define  _CRT_SECURE_NO_WARNINGS

#endif
void selectsource(medin *r[]);
using namespace std;

#ifndef medin_h //super clasd medin
#define medin_h

int main() {
	string title, auth, name, media, rating;
	int price, year;
	bool found = false;
	medin *r[66];
	//char media;
	cout << "Enter title of the media (-1 to end) ";
	getline(cin, title, '\n');
	//cin >> title, '\n';

	//while (year != -1) { //
	int i, j;
	for (i = 0; i < 3; i++) {
		cout << "enter year of media ";
		cin >> year;

		cout << "Enter name of author ";
		cin >> auth;

		cout << "Enter price ";
		cin >> price;

		cout << "Entr b for book or m for media: ";
		cin >> media;

		selectsort(r);

		//cout << "The resutls are: " << selectsort(title) << selectsort(year);


		for (j = 0; j < 3; j++) {
			cout << title[j] << endl;




		}


	}

	system("pause");
#endif
};