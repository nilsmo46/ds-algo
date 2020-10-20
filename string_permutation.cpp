#include <iostream>
#include <algorithm>

using namespace std;

void perm(char s[], int l,int h){
    // USING STATIC ARRAY
    
    // static int a[10] = {0};
    // static char x[10];
    // int i;
    // if(s[k] == '\0'){
    //     x[k]='\0';
    //     cout<<x<<endl;
    // }else{
    //     for(i=0;s[i] != '\0';i++){
    //         if(a[i] == 0){
    //         x[k] = s[i];
    //         a[i] = 1;
    //         perm(s, k+1);
    //         a[i]= 0;
    //     }
    //     }
    // }
    
    // USING LOW & HIGH
    if(l == h){
        cout<<s<<endl;
    } else {
        for(int i = l;i<=h;i++){
            swap(s[l], s[i]);
            perm(s, l+1, h);
            swap(s[l], s[i]);
        }
    }
}
int main() {
   char s[]= "ABC";
   perm(s, 0, 2);
}
