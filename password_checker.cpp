#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool uppercase(string z){
    for(int i =0;i < z.length();i++){
        if(isupper(z[i])){
      return true;
        } 
    }
    return false;
}
bool lowercase(string a){
    for(int i =0; i < a.length();i++){
        if(islower(a[i])){
            return true;
        }
    }
    return false;
}
bool digit(string s){
    for(int i =0; i < s.length();i++){
        if(isdigit(s[i])){
            return true;
        }
    }
    return false;
}
bool special(string m){
    for(int i =0;i < m.length();i++){
        if(ispunct(m[i])){
            return true;
        }
    }
    return false;
}
bool Strong(string f){
bool hasupper =false;
bool haslower = false;
bool hasdigit =false;
bool hasspecial = false;

    for(int i=0;i<f.length();i++){
        if (isupper(f[i])){
            hasupper = true;
            }
        if (islower(f[i])) {
            haslower = true;
            }
        if (isdigit(f[i])) {
            hasdigit = true;
            }
        if (ispunct(f[i])) {
            hasspecial = true;
            }
            if( hasupper&& haslower&& hasdigit&& hasspecial){
            break;
        }
    }
    return hasupper && haslower && hasdigit && hasspecial;
}
int main(){
string x;
while(true){

    bool isvaild = true;

    cout<<" Enter a password"<<endl;
    cin>> x;
    

    if(x.length()< 8 ){
        cout<<"password needs to be at least 8 characters "<<endl;
    isvaild = false;
    } 
    if(!uppercase(x)){
        cout<< "Password need at least one uppercase"<<endl;
        isvaild=false;

    }if(!lowercase(x)){
            cout<<"password need at least one lowercase"<<endl;
            isvaild=false;
    }
    if(!digit(x)){
        cout<<"there needs to be at least one digit"<<endl;
        isvaild=false;
    }
    if(!special(x)){
        cout<<"there needs to be at least one special character "<<endl;
        isvaild=false;
    }
    if(isvaild){
        cout<< "the password is "<< x << "is vaild "<<endl;
     break ;
     }else{
        cout<< "the password is not vaild try agian "<<endl;
        
    }

}
    return 0;
}