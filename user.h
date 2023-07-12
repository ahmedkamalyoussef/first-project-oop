#pragma once
#include <iostream>
#include <string>
using namespace std;
class user
{
protected:
	static int cntr;
	int id,age;
	string password, name, email;
public:
	user() {
		name = "";
		password = "";
		email = "";
		age = 0;
		cntr++;
		id = cntr;
	}
	user(user &_user) {
		name = _user.name;
		password = _user.password;
		email = _user.email;
		age = _user.age;
		id = _user.id;
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
	}
	///////////////////
	void set_email(string email) {
		this->email = email;
	}
	string get_email() {
		return email;
	}
	//////////////////
	void set_password(string password) {
		this->password = password;
	}
	string get_password() {
		return password;
	}
	//////////////////
	void set_name(int age) {
		this->age = age;
	}
	int get_age() {
		return age;
	}
	/////////////////
	int get_id() {
		return id;
	}
	////////////////
	friend istream& operator>>(istream&, user&);
	friend ostream& operator<<(ostream&, user&);
};
