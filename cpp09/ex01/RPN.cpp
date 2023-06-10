#include "RPN.hpp"
#include <sstream>
#include <stdexcept>

double RPN::evaluate(const std::string& expr) {
    std::istringstream iss(expr);
    std::string token;
    while (iss >> token) {
        if (isdigit(token[0])) {
            // Convert token to double and push onto stack
            double value = std::stod(token);
            stack_.push(value);
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack_.size() < 2) {
                // Not enough operands on the stack
                throw std::runtime_error("Error: not enough operands");
            }
            double rhs = stack_.top();
            stack_.pop();
            double lhs = stack_.top();
            stack_.pop();
            if (token == "+") {
                stack_.push(lhs + rhs);
            } else if (token == "-") {
                stack_.push(lhs - rhs);
            } else if (token == "*") {
                stack_.push(lhs * rhs);
            } else if (token == "/") {
                if (rhs == 0) {
                    // Division by zero
                    throw std::runtime_error("Error: division by zero");
                }
                stack_.push(lhs / rhs);
            }
        } else {
            // Invalid token
            throw std::runtime_error("Error: invalid token");
        }
    }
    if (stack_.size() != 1) {
        // Too many operands on the stack
        throw std::runtime_error("Error: too many operands");
    }
    double result = stack_.top();
    stack_.pop();
    return result;
}