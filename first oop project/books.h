#pragma once
#include <iostream>
#include <string>
#include "author.h"
using namespace std;
class books
{
	protected:
	static int cntr;
	int id ,numrates;
	float avgRating,sumrates;
	string title, isbn, category;
	author* auth;
	bool hasAuthor;
public:
	books() {
		cntr++;
		id = cntr;
		avgRating = 0;
		title = "";
		isbn = "";
		category = "";
		hasAuthor = 0;
		numrates = 0;
		sumrates = 0;
	}
	books(books& b) {
		id = b.id;
		avgRating = b.avgRating;
		title = b.title;
		isbn = b.isbn;
		category = b.category;
		numrates = b.numrates;
		sumrates = b.sumrates;
		if (b.hasAuthor)
			setauthor(*b.auth);
	}
	books(author&a) {
		cntr++;
		id = cntr;
		avgRating = 0;
		title = "";
		isbn = "";
		category = "";
		numrates = 0;
		sumrates = 0;
		hasAuthor = 1;
		setauthor(a);
	}
	////////////////////
		void setauthor(author&auth)
		{
			hasAuthor = 1;
			this->auth = new author(auth);
			auth.addbook();
		}
	////////////////////
		void bookrating(int n) {
			numrates++;
			sumrates += n;
			avgRating = sumrates / numrates;
		}
	 ///////////////////
		~books() {
			delete auth;
	 }
	///////////////////
		friend istream &operator>>(istream&, books&);
		friend ostream &operator<<(ostream&, books&);
};

