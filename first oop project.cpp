#include <iostream>
#include <string>
#include "user.h"
#include "author.h"
#include "books.h"
using namespace std;

int main()
{
    author a1,a2,a3;
    cin >> a1 >> a2 >> a2;
    books b1(a1), b2(a1), b3(a3);
    cout << a1.getnumOfBooks() << endl;
    cout << a2.getnumOfBooks() << endl;
    cout << a3.getnumOfBooks() << endl;
}