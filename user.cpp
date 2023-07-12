#include "user.h"

///////////////////
int user::cntr = 0;
///////////////////
istream& operator>>(istream& input, user& _user) {
	cout << "enter user data in this order\n" <<
		"name >> age >> email >> password\n";
	input >> _user.name >> _user.age >> _user.email >> _user.password;
	return input;
}
ostream& operator<<(ostream& output, user& _user) {
	output << "USER DATA\n" << "NAME IS : " << _user.name << " | AGE IS : " 
		<< _user.age << " | ID IS : " << _user.id << " | EMAIL IS : " << _user.email<<endl;
	return output;
}