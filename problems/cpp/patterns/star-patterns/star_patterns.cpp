#include <bits/stdc++.h>
using namespace std;

void block_rectangle(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void hollow_rectangle(int n){
    for (int i=0;i<n;i++){
        if (i == 0 || i == n-1){
            for (int j=0;j<n;j++){
                cout << "*";
            }
        }
        else{
            for (int j=0;j<n;j++){
                if (j==0 || j==n-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void block_right_triangle(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout << '*';
        }
        cout << endl;
    }
}

void hollow_right_triangle(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if (j==0 && i<n-1){
                cout << "*";
            }
            else if (j==i && i<n-1){
                cout << "*";
            }
            else if(i==n-1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void block_inverted_right_triangle(int n){
    for(int i=n;i>=0;i--){
        for(int j=i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }

    // if u have to initialize i from 0 to n
    // for(int i=0;i<n;i++){
    //     for(int j=n-i-1;j>=0;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}

void hollow_inverted_right_triangle(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if (i==n-1){
                cout << "*";
            }
            else if(j==0 && i<n-1){
                cout << "*";
            }
            else if(j==i && i<n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void block_reversed_right_trangle(int n){
    for (int i=0;i<=n;i++){
        for(int j=n-1;j>=0;j++){
            
        }
        cout << endl;
    }
}

int main(){
    int num = 5;
    cout << "1. Block Rectangle : " << endl;
    block_rectangle(num);

    cout << endl;

    cout << "2. Hollow Rectangle :" << endl;
    hollow_rectangle(num);

    cout << endl;

    cout << "3. Block Right Triangle : " << endl;
    block_right_triangle(num);

    cout << endl;

    cout << "4. Hollow Right Triangle : " << endl;
    hollow_right_triangle(num);

    cout << endl;

    cout << "5. Block Inverted Right Triangle :" << endl;
    block_inverted_right_triangle(num);

    cout << endl;

    cout << "6. Hollow Inverted Right Triangle :" << endl;
    hollow_inverted_right_triangle(num);

    cout << endl;

    cout << "7. Block Reversed Right Triangle :" << endl;
    block_reversed_right_trangle(num);



}