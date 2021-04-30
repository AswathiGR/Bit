/*
 * Simple_Calculator.cpp
 * Copyright 2021 Aswathi G R <agr@Infinity>

 */
#include <iostream>
using namespace std;
class Calculator
{    
	public:
	    
	    void addition(void);
	    void Subtraction(void);
	    void Multiplication(void);
	    void Division(void);
	    float m,n,sum,div,diff,prdt;
	    
	   
	};	
		
	void Calculator::addition(void)
	{   cout<<"Enter two numbers for Addition \n";
		cin>>m; 
		cin>>n;
		sum=m+n;
		cout<<"Sum is "<<sum;}
	void Calculator::Subtraction(void)
	{   cout<<"\nEnter two numbers for Subtraction \n";
		cin>>m;
		cin>>n;
		diff=m-n;
		cout<<"Difference is "<<diff;}	
    void Calculator::Multiplication(void)
    {   cout<<"\nEnter two numbers for Multiplication \n";
		cin>>m;
		cin>>n;
		prdt=m*n;
	    cout<<"Product is "<<prdt;}
	void Calculator::Division(void)
	{   cout<<"Enter two numbers for Division \n";
		cin>>m;
		cin>>n;
		div=m/n;
		cout<<"Quotient is "<<div;}	
int main()

{   Calculator result;
	cout<<"Choose which operation to be preformed from option a,b,c,d\n";
		cout<<"\na. Addition\n";
		cout<<"\nb.Subtraction\n";
		cout<<"\nc.Multiplication\n";
		cout<<"\nd.Division\n";
		char operation;
		cin>>operation;
	 if (operation == 'a')
	 {
        result.addition();
      }
       else if(operation == 'b')
       
     {
		 result.Subtraction();
		 
	 }
          else if(operation == 'c')
          
     {
			  result.Multiplication();
	 }
	      else if(operation=='d')
	 {
				 result.Division(); 
				  
	};
    
   
	
	
	return 0;
}

 
