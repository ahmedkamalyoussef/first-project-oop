#pragma once
#include <iostream>
#include <string>
#include "user.h"
using namespace std;
class author :public user
{
private:
	int numOfBooks;

public:
	author() {
		name = "";
		password = "";
		email = "";
		age = 0;
		cntr++;
		id = cntr;
		numOfBooks = 0;
	}
	/////////////////////
	void addbook() {
		numOfBooks++;
	 }
	int getnumOfBooks() {
		return numOfBooks;
	}
	////////////////////
	friend ostream& operator<<(ostream&, author&);
	friend istream& operator>>(istream&, author&);
};

