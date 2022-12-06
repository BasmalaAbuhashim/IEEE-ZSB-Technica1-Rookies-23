#include <iostream>
using namespace std;
void max_heap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a,int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
int main() {
   cout<<"to exit enter any char"<<endl;
   int sz = 1;
   int *a = new int(sz);
   while(cin>>a[sz]){
    ++sz;
   }
   build_maxheap(a,sz);

   for (int i = 1; i <= sz; i++) {
      cout<<a[i]<<" ";
   }
   cout<<endl;
}