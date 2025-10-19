#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "int datatype" << endl;
    int int_low_cap = -2147483648;
    int int_high_cap = 2147483647; 
    //one more than the limit => overflows and shows the lowest value
    int int_one_more_than_cap = 2147483648;
    cout << "int low cap : " << int_low_cap << endl << "int high cap : " << int_high_cap << endl;
    cout << "overflow : " << int_one_more_than_cap << endl;


    float x = 3.142;
    float y = 5;
    cin >> x;
    cin >> y;
    cout << "float x : " << x << " float y : " << y << endl;

    string s = "hello";
    cout << s << endl;
    s += " world";
    cout << s << endl;

    string s1;
    cout << "cin.ignore() is to be used AFTER using cin to take input and BEFORE using getline to take string input" << endl;
    cin.ignore();
    getline(cin, s1);
    cout << s1 << endl;
    
    char ch = 'A';
    cout << "char ch : " << ch << endl;
    ch++;
    cout << "char ch++ : " << ch << endl;
    cout << "able to manipulate the ascii value of char" << endl;
    cout << "able to print char as int : " << int(ch) << endl;

    char ch2;
    cin >> ch2;
    cout << "char ch2 : " << ch2 << endl;
    cout << "take input like this : h" << endl;

    cout << endl;


    cout << "checking the limits of various data types" << endl;
    cout << "note that int and long have the same limits for my machine";
    cout << "\n--- int datatype ---" << endl;
    cout << "--- int datatype ---" << endl;
    cout << "Min int value (INT_MIN): " << INT_MIN << endl;
    cout << "Max int value (INT_MAX): " << INT_MAX << endl;
    cout << "easier to remember as -10^9 to 10^9 (but not in my case)" << endl;

    // Option A: print as a fixed whole number (no decimals)
    cout << fixed << setprecision(0) << pow(10, 9) << defaultfloat << endl;

    cout << "\n--- long datatype ---" << endl;
    cout << "Min long value (LONG_MIN): " << LONG_MIN << endl;
    cout << "Max long value (LONG_MAX): " << LONG_MAX << endl;
    cout << "easier to remember as -10^12 to 10^12" << endl;

    cout << "\n--- long long datatype ---" << endl;
    cout << "Min long long value (LLONG_MIN): " << LLONG_MIN << endl;
    cout << "Max long long value (LLONG_MAX): " << LLONG_MAX << endl;
    cout << "easier to remember as -10^18 to 10^18" << endl;
    cout << "\n--- float datatype ---" << endl;
    cout << "Min float value (FLT_MIN): " << FLT_MIN << endl;
    cout << "Max float value (FLT_MAX): " << FLT_MAX << endl;
    cout << "Precision value (FLT_DIG): " << FLT_DIG << endl;

    cout << "\n--- double datatype ---" << endl;
    cout << "Min double value (DBL_MIN): " << DBL_MIN << endl;
    cout << "Max double value (DBL_MAX): " << DBL_MAX << endl;
    cout << "Precision value (DBL_DIG): " << DBL_DIG << endl;



    std::cout << "sizeof(int) = " << sizeof(int) << " bytes, INT_MAX = " << std::numeric_limits<int>::max() << "\n";
    std::cout << "sizeof(long) = " << sizeof(long) << " bytes, LONG_MAX = " << std::numeric_limits<long>::max() << "\n";
    std::cout << "sizeof(long long) = " << sizeof(long long) << " bytes, LLONG_MAX = " << std::numeric_limits<long long>::max() << "\n";
    std::cout << "sizeof(void*) = " << sizeof(void*) << " bytes (pointer size)\n";
    std::cout << "int32_t/ int64_t availability: sizeof(int32_t) = " << sizeof(int32_t) << ", sizeof(int64_t) = " << sizeof(int64_t) << '\n';
    return 0;
}