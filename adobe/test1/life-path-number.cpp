Write a C program to get day, month and year and calculate the life path number.



Input format
Input should be in below foramt

Date-Month-Year



Output format
Life path number

Code constraints
1<=Date<=31

1<=Month<=12

1<=Year<=9999

Sample testcases
Input 1
29-11-2019
Output 1
7
Input 2
17-12-1986
Output 2
8
  
#include<bits/stdc++.h>
using namespace std;
int s2i(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum=sum*10+(s[i]-48);
    }
    return sum;
}
int find(int n){
    int sum=0;
    do{
        sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        n=sum;
    }while(sum>9);
    return sum;
}
int main(){
    string n;
    cin>>n;
    string str="";
    int sum=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='-'){sum+=find(s2i(str));str="";}
        else if(i==n.size()-1){sum+=find(s2i(str+n[i]));break;}
        else str+=n[i];
    }
    sum=find(sum);
    cout<<sum;
    return 0;
}
