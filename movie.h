#pragma once

/*Michael Braunstein
July 13, 2018
Movie
*/
#include"medin.h"

class movie : public medin {
private: string rating;
public: movie(string t, float p, string r) {
	title = t;
	price = p;
	rating = r;
}
		string getrating() {
			return rating;
		}
};

