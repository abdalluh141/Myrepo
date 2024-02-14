// included libraries:
#include<iostream>
#include<stdlib.h>
using namespace std;
//  create function LinearSearch:
int LinearSearch(int *array,int size,int target){
    for (int i=0;i<size;i++)
    {
        if (array[i]==target)
            return i;
    }
    return -1;
}
//  main function:
int main(){
    // size of array:
    int n_size;
    cout<<"plz enter size of array ..! \n";
    cin>>n_size;
    // create random array:
    int *testArray=new int[n_size];
    for(int i=0;i<n_size;i++)
        testArray[i]=1+rand()%101;
    //  target search:
    int target;
    cout<<"enter number want to searching ..! \n";
    cin>>target;
    // call function:
    int predict=LinearSearch(testArray,n_size,target);
    if (predict !=-1)
        cout<<"the number \'"<<target<<"\' is found at index ="<<predict<<endl;
    else
        cout<<"the number \'"<<target<<"\' is not found ..! \n";

} 