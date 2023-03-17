#include<iostream>
using namespace std;
bool checkpalindrome(char str[]){
    int j,i;
    for(j=0;j<'\0';j++){
        ;
    }
    for(i=0;i<=j;i++){
        if(str[i]==str[j]){
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int size=1000;
    char str[size];
    cin>>str;
    cout<<(checkpalindrome(str) ? "true":"false");

}
