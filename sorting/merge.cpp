//Incomplete...
#include<iostream>
using namespace std;
void merge(int m[],int l[],int a[]){
        int i=0,j=0,k=0;
        int m1=*(&m+1)-m;
        int l1=*(&l+1)-l;
        while(i<m1 && j< l1)
        {
                if(m[i]<=l[j]){
                    a[k++]=m[i];
                   i++;

                }
                else {
                a[k++]=l[j++];
                }

        }
        while(i<m1){
        a[k++]=m[i++];
        }
        while(j<l1)
            a[k++]=l[j++];

}

void print(int a[],int n){

        for(int i=0;i<n;i++)
            cout<<a[i]<<"  ";
 
}
void mergesort(int a[],int n){
        if(n<2)
            return;
        int mid=n/2;
        int left[mid];
        int right[n-mid];
        for(int i=0;i<mid;i++)
            left[i]=a[i];
       cout<<"here"; 
        print(left,(*(&left+1)-left));
        for(int i=mid;i<n;i++)
            right[i-mid]=a[i];
        mergesort(left,(int)(sizeof(left)/sizeof(left[0])));
        mergesort(right,(int)(sizeof(right)/sizeof(right[0])));
        merge(left,right,a);

}
int main(){
        int a[]={8,2,4,5,6,1,2};
        int n=sizeof(a)/sizeof(a[0]);
        mergesort(a,n);
       return 0;


}
