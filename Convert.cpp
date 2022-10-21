#include "Convert.h"
#include <stack>
#include <queue>
#include <string>
#include <iostream>

using namespace std;

Convert::Convert() { };

bool Convert::is_number(const string& s) {
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void Convert::getAnswer(vector<string> input) {
    stack<int> inputs;
    stack<string> equation;

    int first;
    int second;

    for(int i = input.size()-1; i>=0; i--) {
        
        if(is_number(input.at(i))) {
            equation.push(input.at(i));
            inputs.push(stoi(input.at(i)));
        } else {
            if(inputs.size() < 2) {
                cout << "Error" << endl;
                return;
            }
            first = inputs.top();
            inputs.pop();
            second = inputs.top();
            inputs.pop();

            inputs.push(operation(first, second, input.at(i)));

            auto topstring = equation.top();
            equation.pop();
            auto bottomstring = equation.top();
            equation.pop();

            equation.push("(" + topstring + " " + input.at(i) + " " + bottomstring + ")");

            
        }
    
        
        
    }

    string result = equation.top();

    result = result.substr(1, result.size() -2);

    if(inputs.size() == 1) {
        cout << result << " = " << inputs.top() << endl;
        return;
    } else {
        cout << "Error" << endl;
        return;
    }
    
}


int Convert::operation(int first, int second, string opp) {

switch(opp.at(0)) {
    case '+':
        return first + second;
    case '-':
        return first - second;
    case '/':
        return first/second;
    case '*':
        return first*second;
}

return 0;


}