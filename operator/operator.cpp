  
 #include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
 using namespace std;
class Fraction
{ 
        int num, den;
     public:
	Fraction(int num,int den)
	{
	this->num=num;
	this->den=den;
	}
 
        bool operator==(Fraction &s) //Overload Unary Decrement
        {
               if((num)*(s.den)==(s.num)*(den))
		return 1;
		else
		return 0;
		
        }
        bool operator<(Fraction &s) //Overload Unary Decrement
        {
               if((num)*(s.den)<(s.num)*(den))
		return 1;
	else return  0;
		
        }	
        bool operator>(Fraction &s) //Overload Unary Decrement
        {
               if((num)*(s.den)>(s.num)*(den))
		return 1;
	else return  0;
		
        }
        Fraction operator-(Fraction &s) //Overload Unary Decrement
        {
  	Fraction s3(0,0);
	s3.num=(num)*(s.den)-(s.num)*(den);
	s3.den=(s.den)*den;
	int gcd=1;
	
	for(int i=1; i <= abs(s3.num)&& i <= abs(s3.den); ++i)
   	 {
    
        	if(abs(s3.num)%i==0 && abs(s3.den)%i==0)
            gcd = i;
   	 }
	s3.num/=gcd;
	s3.den/=gcd;

	return s3;
		
        }

       Fraction operator+(Fraction &s) //Overload Unary Decrement
        {
  	Fraction s3(0,0);
	s3.num=(num)*(s.den)+(s.num)*(den);
	s3.den=(s.den)*den;
	int gcd=1;
	
	for(int i=1; i <= s3.num && i <= s3.den; ++i)
   	 {
    
        	if(s3.num%i==0 && s3.den%i==0)
            gcd = i;
   	 }
	s3.num/=gcd;
	s3.den/=gcd;
	return s3;
		
        }
        Fraction operator*(Fraction &s) //Overload Unary Decrement
        {
  	Fraction s3(0,0);
	s3.num=(num)*(s.num);
	s3.den=(s.den)*den;
	int gcd=1;
	
	for(int i=1; i <= abs(s3.num)&& i <= abs(s3.den); ++i)
   	 {
    
        	if(abs(s3.num)%i==0 && abs(s3.den)%i==0)
            gcd = i;
   	 }
	s3.num/=gcd;
	s3.den/=gcd;

	return s3;
		
        }
        Fraction operator/(Fraction &s) //Overload Unary Decrement
        {
  	Fraction s3(0,0);
	s3.num=(num)*(s.den);
	s3.den=(s.num)*den;
	int gcd=1;
	
	for(int i=1; i <= abs(s3.num)&& i <= abs(s3.den); ++i)
   	 {
    
        	if(abs(s3.num)%i==0 && abs(s3.den)%i==0)
            gcd = i;
   	 }
	s3.num/=gcd;
	s3.den/=gcd;

	return s3;
		
        }
        void display()
        {
                cout<<num<<"/"<<den<<endl;
          
        }
};
int main()
{
        Fraction A(3,8);
        Fraction B(5,8);
	cout<<"A :";
	A.display();
        cout<<"B :";
	B.display();
	if(A==B)
	cout<<"They are equal"<<endl;
	else
	{
	if(A<B)
	cout<<"A < B"<<endl;
	else if(A>B)
	cout<<"A > B"<<endl;
	}
	Fraction C(A+B);
	cout<<"A+B = ";
	C.display();
	Fraction D(A-B);
	cout<<"A-B = ";
	D.display();
	Fraction E(A*B);
	cout<<"A*B = ";
	E.display();
	Fraction F(A/B);
	cout<<"A/B = ";
	F.display();
        return 0;
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

