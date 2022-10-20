#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <iterator>

#include "Convert.h"

using namespace std;

bool is_number(const string& s) {
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

bool is_operation(string s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

void printStack(stack<string> operators) {

    while (!operators.empty()) {
        cout << operators.top() << " ";
        operators.pop();
    }
    cout << endl;
}

void printQueue(queue<int> operants) {

    while (!operants.empty()) {
        cout << operants.front() << " ";
        operants.pop();
    }
    cout << endl;
}

int main() {

    string input;
    getline(cin, input);
    stringstream ss(input);
    istream_iterator<string> begin(ss);
    istream_iterator<string> end;
    vector<string> vstrings(begin, end);

    stack<string> operators;
    queue<int> numbers;

    for (string s : vstrings) {
        if (is_number(s)) {
            numbers.push(stoi(s));
        } else if (is_operation(s)) {
            operators.push(s);
        }
    }

    if((numbers.size() - operators.size()) != 1) {
        cout << "Error" << endl;
        return 0;
    } 

    if(numbers.size() == 1) {
        cout << numbers.front() << " = " << numbers.front() << endl;
        return 0;
    }

    Convert Jack;

    Jack.printEq(numbers, operators);

    return 0;
}