#include <iostream>
using namespace std;

int main() {
 int n;
 
 /*
    // reversing the integer in an array

            cout<<"Enter the size of an array:"<<endl;
            cin>>n;
            int arr[1000];
            cout<<"Enter the element of an array: ";
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            
            int i=0,j=n-1;
            while(j>i){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            
            for(int i = 0;i<n;i++){
                cout<<arr[i];
            }

            return 0;
*/

/*
    // Fibonacci series using arrays concepts
                int n;
                int arr[1000];
                int ans;
            
            cout<<"Enter the Fibonacci sequence number: ";
            cin>>n;
                arr[0] = 0;
                arr[1]= 1;
            for(int i=2;i<=n-1;i++){
                
                    arr[i] = arr[i-1] + arr[i-2];
                }
            
                cout<<arr[n-1];
                return 0; 
*/


/*
    // Problem 03 : Cyclic Rotation 
                    // 1 ,2 ,3 ,4 ,5
                    // 5 ,1 ,2 ,3 ,4 
                    int n;
                    
                    cout<<"Enter the size of an array: ";
                    cin>>n;
                    int arr[1000];
                    int temp;
                    for(int i=0;i<n;i++){
                        cin>>arr[i];
                    }
                    
                    temp = arr[n-1]; 
                    for(int i=n-2;i>=0;i--){
                        arr[i+1] = arr[i];
                    }
                    arr[0] = temp;
                    
                    for(int i=0;i<n;i++){
                        cout<<arr[i];
                    }
      */


    /*
    // Second Maximum in an array

                // eg  4 5 6 3 7     ans = 6


                int arr[1000];
                int first = -1;
                int n;
                cout<<"Enter the size of an array: ";
                cin>>n;

                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }

                for(int i =0;i<n;i++){
                    if(arr[i]>first){
                        first = arr[i];
                    }
                }
                // first
                cout<<"The highest number is : "<<first<<endl;

                // Second highest number 

                int second = -1;
                int i = 0;
                for(int i = 0;i<n;i++){
                if(arr[i] != first){
                    if(arr[i]>second){
                        second = arr[i];
                    }
                }
                    
                }
                cout<<"The second highest number is : "<<second;              



*/
    // Missing number in sequenced array

                    // eg [1 2 4 5 6]  ans = 3


                    int n;
                    int sum =0;
                    int arr[1000];
                    cout<<"Enter the size of an array: ";
                    cin>>n;

                    for(int i=0;i<n-1;i++){
                        cin>>arr[i];
                    }

                    // Missing number
                    for(int i=0;i<n-1;i++){
                        sum +=arr[i];
                    }

                    int ans = n*(n+1)/2 - sum;

                    cout<<ans;



                    return 0;
}