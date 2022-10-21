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

    if(vstrings.size() == 1 && is_number(vstrings.at(0))) {

        cout << vstrings.at(0) << " = " << vstrings.at(0) << endl;
        return 0;
    }

    Convert Jack;

    Jack.getAnswer(vstrings);


    return 0;
}