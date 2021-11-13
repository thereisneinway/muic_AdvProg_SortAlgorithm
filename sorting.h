#include <iomanip>

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;
}
inline void swap(int &x,int &y){
  int temp = y;
  y = x;
  x = temp;
}
void bubble(int a[],int n){//DONE
  int move=0;
  for(int j=1;j<n-1;j++){
    for(int i=0;i<n-j;i++){
      move++;
      if(a[i]>a[i+1]) {
        swap(a[i],a[i+1]);
      }
    }
  }
  cout<<"total move: "<<move<<endl;
}
void insertion(int a[],int n){//DONE
  int move=0;
  for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
      move++;
      if(a[j]<a[j-1]){
         swap(a[j],a[j-1]);
      }
      else if(a[j]>a[j-1]) break;
    }
  }
  cout<<"Enter number: ";
  cin<<move;
  cout<<"total move: "<<move<<endl;
}
void selection(int a[],int n){//DONE
  int move=0;
  for (int i=0;i<n;i++){
    int low = i;
    for(int j=i+1;j<n;j++){
      if(a[low]>a[j]) low = j;
      move++;
    }
    swap(a[i],a[low]);
  }
  cout<<"total move: "<<move<<endl;
}

