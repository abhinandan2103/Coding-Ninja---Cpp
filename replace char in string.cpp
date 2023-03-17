#include<iostream>
#include<cstring>
using namespace std;
void replace(char str[],char c1,char c2){
    for(int i=0;i<'\0';i++){
        if(str[i]==c1){
            str[i]=c2;
        }
        
    }
}
int main(){
    int size=1000;
    char str[size];
    char c1,c2;
    cin>>str;
    cin>>c1>>c2;
    replace(str,c1,c2);
    cout<<str<<endl;
}