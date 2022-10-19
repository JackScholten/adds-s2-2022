#include "Convert.h"
#include <stack>
#include <queue>
#include <string>

using namespace std;

Convert::Convert() { };

int Convert::getAnswer(queue<int> queue, stack<string> stack) {

int first;
int second;

while(stack.size() != 0) {
first = queue.front();
queue.pop();
second = queue.front();
queue.pop();

queue.push(operation(first, second, stack.top()));
stack.pop();

}

return queue.front();
}

void Convert::printEq(std::queue<int> queue, stack<string> stack) {



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

}