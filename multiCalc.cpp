#include <iostream>
using namespace std;

//Template with a contructor that takes in wto parametors
template <class T>
class Calculate
{
    private:
    T first, second;
    //Different claculation operations to perform
    public:
    Calculate(T a, T b)
    :first (a), second (b){ }
    T addition();
    T subtraction();
    T multiplication();
    T division();
    T modulus();
};

//Calculation fuctions for different operations
template <class T>
T addition(T a, T b)
{
    return (a + b);
}

template <class T>
T subtraction (T a, T b)
{
    return (a - b);
}

template <class T>
T multiplication (T a, T b)
{
    return (a * b);
}

template <class T>
T division (T a, T b)
{
    return (a / b);
}

template <class T>
T modulus (T a, T b)
{
    return (a % b);
}

int main()
{
    double r, s;
    char sign;
    
    cout << "Please insert the first number : ";
    cin >> r;
    
    cout << "Choose the sign for calculation(+, -, *, /): ";
    cin >> sign;
    
    cout << "Now insert the second number: ";
    cin >> s;
    
    //Calculation operation signs to perform appropriate calculation from any of the four
    if(sign == '*')
    {
      cout << "The answer for multiplication is : " << multiplication(r, s)<< endl;  
    }
    else if(sign == '+')
    {
        cout << "The answer for addition is : " << addition(r, s)<< endl;
    }
    else if(sign == '-')
    {
        cout << "The answer for subtraction is : " << subtraction(r, s)<< endl;
    }
    else if(sign == '/')
    {
        cout << "The answer for division is : " << division(r, s)<< endl;
    }
    else
    {
        cout << "Error, insert the correct sign!";
    }
    
    return 0;
    
}
