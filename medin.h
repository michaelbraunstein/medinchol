#pragma once
/* Michael Braunstein
Media 
July 13, 2018
*/

 

using namespace std;


class medin {
protected:

	string title;

	double price;

public:
	medin() {
		title = "";
		price = 1.00;
	}

	medin(string t, int p) {
		title = t;
		price = p;
	}

	string gettitle() {
		return title;
	}

	double getprice() {
		return price;
	}
	bool operator <(medin r) {
		if (title < r.title)
			return true;
		else
			return false;
	};


	void virtual print() {
		cout << "Title is " << title << endl;
		cout << "Price is " << price << endl;
	}
}

;
