#pragma once
/*
Michael Braunstein
CISS 290 
July 13, 2018
header search for media inheritance
*/



void selectsort(medin *r[]){//(char str[][20], int N) {// medin *str

int pass;
int j;
int min;
int N = 3;
	
	// char temp[20];
	medin *temp;
	for (pass = 0; pass <= 2; pass++) {  // passes

		min = pass;
		for (j = pass + 1; j < N; j++) { // in each pass
			if (*r[j] < *r[min]) //(str, *r) > 0) // medin * strcmp
				min = j;
			temp=r[min];
			r[min] = r[pass];
			r[pass]= temp;
		}
	}
		/*
		strcpy(temp, str[min]);
		strcpy(str[min], str[pass]);
		strcpy(str[pass], temp);
		*/
	
};







