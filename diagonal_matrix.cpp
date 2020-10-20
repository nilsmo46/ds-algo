#include <iostream>
#include <algorithm>

using namespace std;

class Matrix {
    private:
        int *a;
        int n;
    public:
        Matrix(){
            n=2;
            a=new int[2];
        }
        Matrix(int n){
            this->n = n;
            a = new int[n];
        }
        ~Matrix(){
            delete []a;
        }
        void set(int i, int j, int x);
        int get(int i, int j);
        void display();
};
void Matrix::set(int i, int j, int x){
    if(i == j){
        a[i- 1] =x;
    }
}

int Matrix::get(int i, int j){
    if(i ==j){
        return a[i- 1];
    }
    return 0;
}
void Matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                cout<<a[i]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main() {
   Matrix d(3);
   d.set(1,1,5);
   d.set(2,2,10);
   d.set(3,3,15);
   
   
   d.display();
}
