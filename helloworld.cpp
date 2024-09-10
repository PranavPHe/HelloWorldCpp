#include <iostream>
using namespace std;
#include <string>

int main()
{
    int age = 15;
    float height = 1.75;
    char day = 'B';
    bool isCodingFun = true;
    string greeting = "Hello World!";

    cout << greeting << " I am " << age << " years old." << "\nI am " << height << " meters tall, and today is a " << day << " day!" << endl;

    if (isCodingFun) {
        cout << "I think that coding is fun :)" << endl;
    }
    else {
        cout << "I hate coding >:(" << endl;
    }
}