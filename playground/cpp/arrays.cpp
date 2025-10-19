# include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modifying array elements
    arr[2] = 10; // changing the third element to 10
    cout << "Modified array elements are: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cin >> arr[0]; // taking input for the first element
    cout << "After input, first element is: " << arr[0] << endl;
    cout << "Enter 5 elements for the array: ";
    int arr2[5];
    for (int i = 0; i < 5; i++){
        cin >> arr2[i];
    }
    cout << "Array elements after taking dynamic input: ";
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << "arr2[4] is not initialized, so it may contain garbage value: " << arr2[4] << endl; 
    cout << endl;


    int arr3[3][5];
    cout << "2D Array elements input: ";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr3[i][j];
        }
    }
    cout << "2D Array elements are: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    float arr4[4] = {1.1, 2.2, 3.3, 4.4};
    cout << "Float array elements are: ";
    for (int i = 0; i < 4; i++){
        cout << arr4[i] << " ";
    }
    cout << endl;

    float arr5[3][5];
    cout << "Enter 15 elements for the 2D array: ";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr5[i][j];
        }
    }
    cout << "2D Array elements are: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout << arr5[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}