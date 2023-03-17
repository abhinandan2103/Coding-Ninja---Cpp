#include<iostream>
using namespace std;
void space(int start,int step,int end){
    int i;
    for(i=start;i<=end;i=i+step){
        float c=(start-32)*5.0/9.0;
        cout<<c<<endl;
    }
}
int main(){
    int start,step,end;
    cout<<"enter the start value";
    cin>>start;
    cout<<"enter step value";
    cin>>step;
    cout<<"enter end value";
    cin>>end;
    space(start,step,end);
}
