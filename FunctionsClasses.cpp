#include <iostream>

class testClass{
    public:
        int num = 0;
    void display(){
        std:: cout << "TESTING CLASS" << std:: endl;
    }
};

// Base case for recursion
void print() {
    std::cout << std::endl;
}

// Variadic template function
template<typename T, typename... Args>
void print(T first, Args... args){
    std::cout << first << " ";
    print(args...);
}


int main(){
    testClass display;

    print("Hello",2024);
    display.num;
    display.display();
    
}