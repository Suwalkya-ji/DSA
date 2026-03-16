#include<iostream>
using namespace std;

int main () {

    int n = 4;
    
// ques 1 => *
//           * * 
//           * * *
//           * * * *

        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<"* ";
            }
            cout<<endl;
        }


// ques 2 => 1
//           2 2 
//           3 3 3
//           4 4 4 4
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }


// ques 3 => A
//           B B 
//           C C C
//           D D D D

        char ch = 'A';
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<ch<<" ";
            } 
            ch++;
            cout<<endl;
        }


// ques 4 => 1
//           1 2
//           1 2 3
//           1 2 3 4

        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<j+1<<" ";
            }
            cout<<endl;
        }


// ques 5 => 1
//           2 1 
//           3 2 1
//           4 3 2 1

        for(int i=0; i<n; i++) {
            for(int j=i+1; j>0; j--) {
                cout<<j<<" ";
            }
            cout<<endl;
        }


// ques 6 => A                                               
//           B A 
//           C B A
//           D C B A

            for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << char('A' + i - j) << " ";
            }
            cout << endl;
        }



// ques 7 => 1
//           2 3 
//           4 5 6
//           7 8 9 10

        int num = 1;
        for(int i =0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }


// ques 8 => A
//           B C 
//           D E F
//           G H I J

        char w = 'A';
        for(int i=0; i<n; i++) {
            for(int j=0; j<i+1; j++) {
                cout<<w<<" ";
                w++;
            }
            cout<<endl;
        }


// ques 9 => 1 1 1 1
//             2 2 2
//               3 3
//                 4

        for(int i=0; i<n; i++) {
            // print space first
            for(int j=0; j<i; j++) {
                cout<<" ";
            }

            // print number
            for(int j=0; j<n-i; j++) {
                cout<<i+1;
            }
            cout<<endl;
        }


// ques 10 => A A A A
//             B B B
//               C C
//                 D
        
        char wo = 'A';
        for(int i=0; i<n; i++) {
            // print spaces
            for(int j=0; j<i; j++) {
                cout<<" ";
            }

            // print char
            for(int j=0; j<n-i; j++) {
                cout<<wo;
            }
            wo += 1;
            cout<<endl;
        }


// ques 11 =>     1
//              1 2 1
//            1 2 3 2 1
//          1 2 3 4 3 2 1


        for(int i=0;i<n; i++) {
            // print spaces
            for(int j=0; j<n-i-1; j++) {
                cout<<" ";
            }

            // print nums1
            for(int j=0; j<i+1; j++){
                cout<<j+1;
            }

            // print nums2
            for(int j=i; j>=1; j--){
                cout<<j;
            }

            cout<<endl;
        }




    return 0;
}