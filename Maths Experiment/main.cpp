#include <iostream>
#include "MathsExperiment.hpp"

class MathsExperiment {
public:
    
    float add(const float& a, const float& b) {
        return a + b;
    }
    
    float subtract(const float& a, const float& b) {
        return a - b;
    }
    
    float multiply(const float& a, const float& b) {
        return a * b;
    }
    
    float divide(const float& a, const float& b) {
        // Dividing by 0 would result in inf being returned.
        if (b == 0) {
            std::cerr << "Error: Division by zero is not allowed.\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    float numberA, numberB;
    
    std::cout << "Enter a number: ";
    std::cin >> numberA;
    
    std::cout << "Enter another number: ";
    std::cin >> numberB;
    
    int selectedOperation;
    
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "Please select an operation: ";
    std::cin >> selectedOperation;
    
    MathsExperiment maths;
    
    switch (selectedOperation) {
       
        case 1:
            std::cout << "Result: " << maths.add(numberA, numberB) << "\n";
            break;
            
        case 2:
            std::cout << "Result: " << maths.subtract(numberA, numberB) << "\n";
            break;
            
        case 3:
            std::cout << "Result: " << maths.multiply(numberA, numberB) << "\n";
            break;
            
        case 4:
            std::cout << "Result: " << maths.divide(numberA, numberB) << "\n";
            break;
            
        default:
            std::cerr << "Invalid operation selected.\n";
    }
}
