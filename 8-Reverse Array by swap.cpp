#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
   for(int i=0;i<n;i++){
   	cin>>arr[i];
   }
     for(int i=0;i<n;i++){
   	cout<<arr[i];
   }
   int s=0;
   int e=n-1;
   while(s<e){
   	swap(arr[s],arr[e]);
   	s++;
   	e--;
   }
   
   cout<<endl<<"after reverse \n";
   int rev[n];
    for(int i=0;i<n;i++){
   	rev[i]=arr[n-1-i];
   }
   
   
    for(int i=0;i<n;i++){
   	cout<<rev[i];
   }
    return 0;
}

