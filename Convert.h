#ifndef _Convert
#define _Convert

#include <stack>
#include <queue>
#include <string>

class Convert {
    public:
        Convert();

        int getAnswer(std::queue<int> queue, std::stack<std::string> stack);
        void printEq(std::queue<int> queue, std::stack<std::string> stack);
        int operation(int first, int second, std::string opp);
        

};


#endif