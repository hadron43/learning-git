#include<iostream>
using namespace std;

void heapify(int arr[],int curr,int size)                //create a max-heap
{
    int largest=curr;
    int l=2*curr+1;
    int r=2*curr+2;

    if(l<size && arr[l]>arr[largest])
        largest=l;
    if(r<size && arr[r]>arr[largest])
        largest=r;

    if(largest!=curr)
    {
        int temp=arr[curr];
        arr[curr]=arr[largest];
        arr[largest]=temp;

        heapify(arr,largest,size);
    }
}


void heap_sort(int arr[],int size)                        //extracts max element and places the element at right position
{
    for(int i=size/2-1;i>=0;i--)
        heapify(arr,i,size);

    for(int i=size-1;i>0;i--)
    {
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr,0,i);
    }
}


int main()
{
    int arr[7]={9,6,-5,2,6,0,3};
    heap_sort(arr,7);

    cout<<"heap in asc: \n";
    for(int i=0;i<7;i++)
        cout<<arr[i]<<" ";
    return 0;
}
