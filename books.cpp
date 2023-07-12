#include "books.h"
////////////////////
int books::cntr = 0;
//int books::avg = 0;
//int books::rating = 0;
////////////////////
istream& operator>>(istream& input, books& b) {
	cout << "Enter book data in this order\n" << "title >> isbn >> category\n";
	input >> b.title >> b.isbn >> b.category;
	return input;
}
ostream& operator<<(ostream& output, books& b) {
	output << "BOOK DATA\n" << "TITLE IS : " << b.title << " | ISBN IS : " << b.isbn << " | ID IS : "
		<< b.id << " | CATEGORY IS : " << b.category ;
	output<<" | AVG RATING IS : " << b.avgRating << endl;
	if (b.hasAuthor) {
		output << " | Author is : " << b.auth->get_name()<<endl;
		output << *b.auth;
	}
	return output;
}
