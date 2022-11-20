#include <iostream>
using namespace std;


    
int search( int arr[] ,int n,int x){
    int i;
    for (i=0; i <n; i++)
    if (arr[i]==x)
    return i;
    return -1;
        
}
    int main()
    {
    int n;
    cin>>n;
    int arr[n];
        for
           ( int i=0;i<n;i++){
            cin>> arr[i];
     }
    int x;
        cin>>x;
        int result = search(arr,10,x);
        if(result == -1)
            cout<< "element is not in array"<<endl;
        else
            cout<<"element is present at index " << result<<endl;
        
        return 0;
    
   
}
