#include<iostream>
using namespace std;
int* InsertionSort(int *array,int size)
{   int temp,key,j;
    for (int i=1;i<=size-1;i++)
    {   key=array[i];
        for( j=i-1;j>=0;j--)
        {
            if(key<array[j])
            {
                array[j+1]=array[j];
            }
            else 
                break;

        }
        array[j+1]=key;
        
    }
    return array;
}
int main(){
 int array[]={3,10,1,2,85,14,63,7};
    int *sort;
    sort=InsertionSort(array,8);
    for(int i=0;i<8;i++)
        cout<<*(sort+i)<<endl;
}