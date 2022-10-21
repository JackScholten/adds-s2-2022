#ifndef _Convert
#define _Convert

#include <stack>
#include <queue>
#include <string>
#include <vector>

class Convert {
    public:
        Convert();

        void getAnswer(std::vector<std::string> input);
        int operation(int first, int second, std::string opp);

        bool is_number(const std::string& s);

};


#endif