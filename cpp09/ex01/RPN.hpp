#ifndef RPN_
#define RPN_
#include <iostream>
#include <string>
#include <stack>

class RPN {
public:
    double evaluate(const std::string& expr);
    RPN() {}
    ~RPN() {}
private:
    std::stack<double> stack_;
};

#endif
