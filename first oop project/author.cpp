#include "author.h"
istream& operator>>(istream& input, author& _user) {
	cout << "enter AUTHOR data in this order\n" <<
		"name >> age >> email >> password\n";
	input >> _user.name >> _user.age >> _user.email >> _user.password;
	return input;
}
ostream& operator<<(ostream& output, author& _user) {
	output << "AUTHOR DATA\n" << "NAME IS : " << _user.name << " | AGE IS : "
		<< _user.age << " | ID IS : " << _user.id << " | EMAIL IS : " << _user.email<<endl;
	return output;
}
