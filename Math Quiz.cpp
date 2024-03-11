#include<iostream>
#include<time.h>
#include<stdlib.h> 
using namespace std;
void Addition(int& score){
	int num1,num2;
	float a_ans,b_ans;
    num1 = rand() % 90;
	num2 = rand() % 90;
	a_ans =  num1 + num2;
	cout<<num1<<"+"<<num2<<"=";
	cin>>b_ans;
	if (a_ans==b_ans)
	score++;

}

void Subtraction(int& score){
	int num1,num2;
	float a_ans,b_ans;
    num1 = rand() % 90;
	num2 = rand() % 90;
	a_ans =  num1 - num2;
	cout<<num1<<"-"<<num2<<"=";
	cin>>b_ans;
	if (a_ans==b_ans)
	score++;

}

void Multiplication(int& score){
	int num1,num2;
	float a_ans,b_ans;
    num1 = rand() % 90;
	num2 = rand() % 90;
	a_ans =  num1 * num2;
	cout<<num1<<"*"<<num2<<"=";
	cin>>b_ans;
	if (a_ans==b_ans)
	score++;

}



void Division(int& score) {
    int num1, num2;
    float a_ans, b_ans;
    num1 = rand() % 90;
    do {
        num2 = rand() % 90;
    } while (num2 == 0); 
    a_ans = static_cast<float>(num1) / num2;
    cout << num1 << "/" << num2 << "=";
    cin >> b_ans;

    if ((a_ans - b_ans) < 0.001)  
        score++;
 
    
}


main()
{
	system("cls");
	int num1,num2,score=0;
	float a_ans,b_ans;
    char operators[] = {'+', '-', '*', '/'};
	srand(time(0));
	cout<<"Welcome To Math Quiz"<<endl;
	for(int i=1;i<=10;i++){
	char op = operators[rand() % 4];
	switch(op)
	
{
	case '+' :
	{
	 Addition(score);
	}
	break;
	
   
	case '-' :
	{
	 Subtraction(score);
	}
	break;
	
	case '*' :
	{
	 Multiplication(score);
    }  
	break;
	
	case '/' :
	{
	 Division(score);
			
	}
	break;
	
	default :
	{	
	cout<<"Invalid Operator!!!";	
    }
}
    
}
  cout<<"Your Score Is: "<<score<<"/10"<<endl;  
}
