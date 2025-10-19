#include <bits/stdc++.h>
using namespace std;

//?void function that doesnt return anything
void voidfunction(){
    cout << "This is a void function and doesnt return anything." << endl;
}

//?bool function that returns a boolean value
bool boolfunction(){
    return true;
}

//?void non parameterized function
void greet(){
    cout << "Hello, World!" << endl;
}

//?parameterized functions that returns bool
bool isEven(int n){
    return n % 2 == 0;
}

//?parameterized function
int sum(int x, int y){
    return x + y;
}

void passByValue(int a){
    cout << "Inside passByValue, before change: " << a << endl;
    a = a + 5; // This change will not affect the original variable
    cout << "Inside passByValue, after change: " << a << endl;
}

void passbyValue2(string s){
    cout << "Inside passByValue2, before change: " << s << endl;
    s[0] = 't';
    cout << "Inside passByValue2, after change: " << s << endl;
}

void passbyReference(int &a){
    cout << "Inside passByReference, before change: " << a << endl;
    a = a + 5; // This change will affect the original variable
    cout << "Inside passByReference, after change: " << a << endl;
}
void passbyReference2(string &s){
    cout << "Inside passByReference2, before change: " << s << endl;
    s[0] = 't';
    cout << "Inside passByReference2, after change: " << s << endl;
}

void modifyArray(int arr[], int size){
    cout << "Array before modification: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < size; i++){
        arr[i] += 10; // Modify each element by adding 10
    }
    cout << "Array after modification: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    voidfunction();

    boolfunction();
    cout << isEven(4) <<endl;
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;

    greet();

    cout << "Demonstrating pass by value:" << endl;
    int num = 5;
    passByValue(num);
    cout << "Original value: " << num << endl;

    cout << endl;

    cout << "Demonstrating pass by value using string: " << endl;
    string s = "hello";
    passbyValue2(s);
    cout << "Original string: " << s << endl;

    cout << endl;

    cout << "Demonstrating pass by reference:" << endl;
    int num2 = 5;
    passbyReference(num2);
    cout << "Original value: " << num2 << endl;
    
    cout << endl;

    cout << "Demonstrating pass by reference using string: " << endl;
    string str = "hello";
    passbyReference2(str);
    cout << "Original string: " << str << endl;

    cout << endl;
    
    cout << "Arrays are passed by reference by default:" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    modifyArray(arr, 5);
    cout << "Array in main after modification: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}