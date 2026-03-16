#include<iostream>

using namespace std;

int main () {

// ques 1.  => 1 2 3 4
            // 1 2 3 4
            // 1 2 3 4
            // 1 2 3 4

                int n;
                cout<<"enter the value of n -> ";
                cin>>n;

                cout<<"repeat number "<<endl;
                for(int i=1; i<=n; i++) {
                    for(int j = 1; j<=n; j++) {
                        cout<<j<<" ";
                    }
                    cout<<endl;
                }



// ques 2. =>  * * * *
//             * * * *
//             * * * *
//             * * * *  
                cout<<"repeat star "<<endl;
                for(int i=0; i<n; i++) {
                    for(int j=0; j<n; j++) {
                        cout<<"* ";
                    }
                    cout<<endl;
                }



// ques 3. => A B C D
//            A B C D
//            A B C D
//            A B C D

                cout<<"repeat char "<<endl;
                for(int i=0; i<n; i++) {
                    char ch = 'A';
                    for(int j=0; j<n; j++) {
                        cout<<ch<<" ";
                        ch = ch+1;
                    }
                    cout<<endl;
                }



// ques 4. => 1 2 3
//            4 5 6
//            7 8 9 

                cout<<"number series"<<endl;
                int num = 1;
                for(int i =0 ; i<n; i++) {
                    for(int j=0; j<n; j++) {
                        cout<<num<<" ";
                        num += 1;
                    }
                    cout<<endl;
                }



// ques 5. => A B C
//            D E F
//            G H I

                cout<<"char series"<<endl;
                char ch = 'A';
                for(int i=0; i<n; i++) {
                    for(int j = 0; j<n; j++) {
                        cout<<ch<<" ";
                        ch = ch +1;
                    }
                    cout<<endl;
                }


   return 0;

}