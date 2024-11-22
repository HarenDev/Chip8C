#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>

using namespace std;

// Function declarations
class Test{
    public:
        void displayTest();
    private:
        string testString = "Hello World!";
};

Test epicTest;

#endif // MAIN_H
