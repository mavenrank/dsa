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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}

void hollow_reversed_right_triangle(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-i-1 && i<n-1){
                cout << " ";
            }
            else if(j==n-1 && i<n-1){
                cout << "*";
            }
            else if(j==n-i-1 && i<n-1){
                cout << "*";
            }
            else if(i==n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void block_inverted_reversed_right_triangle(int n){
    for (int i=n-1;i>=0;i--){
        for (int j=n-1;j>=0;j--){
            if (j<=i){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void hollow_inverted_reversed_right_triangle(int n){
    for(int i=n-1;i>=0;i--){
        for (int j=n-1;j>=0;j--){
            if (i==n-1){
                cout << "*";
            }
            else if (j==i && i>0){
                cout << "*";
            }
            else if(j==0 && i>0){
                cout << "*";
            }
            else if(i==0 & j==0){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void block_pyramid_non_isometric(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "*";
        }
        for(int k=0;k<i;k++){
            cout << "*";
        }
        cout << endl;
    }
}

void hollow_pyramid_non_isometric(int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (j<n-i-1){
                cout << " ";
            }
            else if(j==n-i-1 && i<n-1){
                cout << "*";
            }
            else if(i==n-1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        for (int k=0;k<i;k++){
            if (k==i-1 && i<n-1){
                cout << "*";
            }
            else if (i==n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void block_arrowhead_facing_right(int n){
    for (int i=0;i<n*2-1;i++){
        if (i<n){
            for(int j=0;j<n;j++){
                if(j<=i){
                    cout << "*";
                }
            }
        }
        else {
            for (int k=0;k<n;k++){
                if (k<n-(i-n)-1){
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}

void hollow_arrowhead_facing_right(int n){
    for (int i=0;i<n*2-1;i++){
        if(i<n){
            for(int j=0;j<n;j++){
                if (j==0 && i<n){
                    cout << "*";
                }
                else if(j==i && i<n){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        else{
            for (int k=0;k<n;k++){
                if(k==0){
                    cout << "*";
                }
                else if(k==n-(i-n)-1-1){
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

void block_arrowhead_facing_left(int n){
    for (int i=0;i<n*2-1;i++){
        if (i<n){
            for(int j=0;j<n;j++){
                if(j>=n-i-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        else{
            for (int k=n-1;k>=0;k--){
                if(k<n-(i-n)-1){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void block_rhombus(int n){
    for (int i=0;i<n*2-1;i++){
        if (i<n){
            for(int j=0;j<n;j++){
                if(j>=n-i-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            for (int k=0;k<i;k++){
                cout << "*";
            }
        }
        else{
            for(int l=0;l<n;l++){
                if(l>i-n){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            for(int m=n-1-1;m>=0;m--){
                if (m>i-n){
                    cout << "*";
                }
            }
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
    
    cout << endl;
    
    cout << "8. Hollow Reversed Right Triangle :" << endl;
    hollow_reversed_right_triangle(num);

    cout << endl;
    
    cout << "9. Block Reversed Inverted Right Triangle : " << endl;
    block_inverted_reversed_right_triangle(num);

    cout << endl;

    cout << "10. Hollow Reversed Inverted Right Triangle : " << endl;
    hollow_inverted_reversed_right_triangle(num);

    cout << endl;

    cout << "11. Block Pyramid non-isometric :" << endl;
    block_pyramid_non_isometric(num);
    
    cout << endl;

    cout << "12. Hollow Pyramid non-isometric : " << endl;
    hollow_pyramid_non_isometric(num);

    cout << endl;

    cout << "13. Block Arrowhead facing Right : " << endl;
    block_arrowhead_facing_right(num);

    cout << endl;

    cout << "14. Hollow Arrowhead facing Right : " << endl;
    hollow_arrowhead_facing_right(num);
    
    cout << endl;
    
    cout << "15. Block Arrowhead facing Left : " << endl;
    block_arrowhead_facing_left(num);

    cout << "17. Block Rhombus : " << endl;
    block_rhombus(num);
}