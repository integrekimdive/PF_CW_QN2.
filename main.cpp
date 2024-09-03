#include <iostream>

using namespace std;

int main()
{int numer;
   char answ;// use character to declare answers

 do{cout<<"Please enter a positive integer: ";
 // do while statement
   cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}
for(int p=numer;p<=1;p++){//for loop
 if(numer%2!=0){
     std::cout<<numer;

}}

do{
if(numer<=0){
    std::cout<<numer<<" is not a positive integer. \n";
    std::cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}
}}while(numer<=0);

cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;
       if(answ=='n'||answ=='N'){std::cout<<"*DONE*"; break;}
else if(answ=='y'|| answ=='Y'){cout<<"Please enter a positive integer: ";
cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;
     }}

do{
if(numer<=0){
    cout<<numer<<" is not a positive integer. \n";
    cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     cout<<numer;

}}
}

}while(numer<=0);
       cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;

}if((answ!='n'||answ!='N')|| (answ!='y'||answ!='Y'))
         {std::cout<<" Please respond with Y (or y) for yes and N (or n) for no. \n";
          cout<<"Would you like to see the divisors of another integer (Y/N)? ";

 cin>>answ;
       if(answ=='n'||answ=='N'){std::cout<<"*DONE*"; break;}
 }
 
{
while((answ=='y'|| answ=='Y')||(answ!='n'||answ!='N'));}





