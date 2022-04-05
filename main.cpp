#include <iostream>
#include <limits>
#include "console.h"

using namespace std;

int main() {
    string name = prompt_string("Enter name: ");
    int id = prompt_int_min("Enter ID: ", 0);
    double balance = prompt_double_min("Enter balance: ", 0);

    cout << "Name: " << name << endl
        << "ID: " << id << endl
        << "Balance: $" << balance << endl;
}
