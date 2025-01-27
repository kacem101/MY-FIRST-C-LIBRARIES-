#include "NUMBERSLIB.h"
#include <stdio.h>
#include <stdbool.h>
double power(int b,int n){
	double i,k;
	k=1;
	if(n<0){
		for(i=-1;i>=n;i--){
			k=k/b;
		}
	}
	else{
	for(i=1;i<=n;i++){
		k=k*b;
	}}
	return k;
}
bool isEven (int num){
	if (num%2==0){
		return true;//check if nuber is even 
	}
	else{
		return false;//returning false otherwise
	}
}
long factorial(int n){
	int i;
	long s;
	s = 1 ;
	for(i=1;i<=n;i++){
				s = s*i ; //a loop for clculating factorial
						}
	if(n<0){
			s=0;//if the number is negative there is no factorial return 0;
			}
	return s;
}

int reverseNumber(int num){
	int s,k,a,t;
	a=0;
	while(num!=0){
		t = num%10;
		a = a*10+t;//creating the reversed number
		num=num/10;
				}
	return a;//returning a the reversed number
	}
bool isPalindrome(int n){
	int s,k,a,t;
	a=reverseNumber(n);
	if(n==a){
		return true ;//comparing if the reversed equqll the the number
			}
	else{
		return false ;
	}}
unsigned long long   factlonglong(int n){
	int i;
	long long  s;
	s = 1 ;
	for(i=1;i<=n;i++){
				s = s*i ; //a loop for clculating factorial
						}
	if(n<0){
			s=0;//if the number is negative there is no factorial return 0;
			}
	return s;
}
long long  powerlonglong(int b,int n){
	long long i,k;
	k=1;
	if(n<0){
		for(i=-1;i>=n;i--){
			k=k/b;
		}
	}
	else{
	for(i=1;i<=n;i++){
		k=k*b;
	}}
	return k;
}
long long choselonglong(int n,int k){
	long long s;
	s=factlonglong(n)/(factlonglong(k)*factlonglong(n-k));
	return s;
}
long long stirling(int n,int k){
	long long d,x;
	int j;
	d=0;
	for(j=0;j<=k;j++){
		d=d+power(-1,k-j)*choselonglong(k,j)*power(j,n);
	}
	
	return d/factorial(k);
}
unsigned long bellNumber(int n){
	int i;
	unsigned long s,x;
	n=n-1;
	x=0;
	if(n<0){
		return -1;
	}
	for(i=1;i<=n;i++){
		x=x+stirling(n,i);//the formula for bell numbers using stirling numbers of the second kind
					}
	s=x;
		return s;
}
int removeZero(int n){
	while(n>0){
		if(n%10==0){
			n=n/10;
		}
		else{
			break;
			}
		}
	return n;
	
}
int  intpower(int b,int n){
	int i,k;
	k=1;
	for(i=1;i<=n;i++){
		k=k*b;
	}
	return k;
}
int chose(int n,int k){
	int s;
	s=factorial(n)/(factorial(k)*factorial(n-k));
	return s;
	
}
long choselong(int n,int k){
	long s;
	s=factorial(n)/(factorial(k)*factorial(n-k));
	return s;
	
}
bool isPrime(int n){
	int i,ind;
		ind = 0;
		if(n<=1){
				return false; //any number less or equall 1 is not prime
				}
		else{
			for(i=2;i<=n/2;i++){
								if(n%i==0){
											ind =1 ;//if there is only one divisor other then 1 and n / n is not prime
											break;
											}
							}
			}
		if(ind==1){
			return false;
		}
		else{
			return true;
		}
}
int sumOfDigits(int num){
	int s;
	s=0;
	while(num!=0){
				s = s+ num%10 ;//taking the weakest bit number and adding it to the sum
				num = num/10;
	}
	if(s<0){
		return -1*s;//the sum of digits is a positive number
	}
	return s;
}
int numberOfDigit (int n){
	int j;
	j=0;
	while(n!=0){
				n=n/10;
				j++;
	}
	return j;
}
int sumEvenFibonacci (int n){
	int s,i,m,d,sum;
	sum=0;
	m =0;// it is u(n)
	d =1 ;// it is u(n+1)
	s =0;// it is u(n+2)
	for (i=1;i<=n;i++){
		if(m%2==0){	
					sum=sum+m;
					}
		s = (d+m) ;
		m = d ;			
		d = s ;
		
				}
	return sum;
	}
int sumDivisors(int n){
	int s,j;
	s = 0 ;
	for(j=1;j<=n;j++){
					if(n%j==0){
								s = s+j ;//adding each divisor to the sum s
								}
					}
							return s;
							
	}
bool isAbundant(int n){
	int s;
	s=sumDivisors(n)-n;
	if(s>n){
		return true;
	}
	else{
		return false;
	}
	
}
bool isHappy (int n){
	int k,s,o,l ;
	k=n;
	o = k ;//saving the value of n
	if(n<0){
		n=-1*n;
	}
	while(o>=7){
		s=0 ;//intializing the sum
						k = o ;//entering the new number 
								while(k>0){ 
											//l=k%10;
											 s = s + (k%10)*(k%10);
											 k = k/10;	//creating the new number from the sum of didgits										 
											}
						o = s ;
						}
	
	if(o==1){
		return true;
	}
	else{
		return false;
	}
}
bool isMagic (int n){
	bool v ;
	v=false;
	int k,s,o ;
	k=n;
	o = k ;//saving the value of n
	if(n<0){
		n=-1*n;
	}
	while(o>=10){
		s=0 ;//intializing the sum
						k = o ;//entering the new number 
								while(k>0){ 
											 s = s + k%10 ;
											 k = k/10;	//creating the new number from the sum of didgits										 
											}
						o = s ;
						}
	
	if(o==1){
		v=true;
		}
		return v;
	}
double sqrtApprox(int n){
	double x,y,def,er;
	er=0.0000001;
	x=(n+1)/2;
	y=(x+(n/x))/2;
	while(n>0){
	x=(x+(n/x))/2;
	y=(x+(n/x))/2;
	def=y-x;
	if(def<er&&def>-1*er){
	break;
	}}
	return x;
	}			

void primeFactors (int n){
	int k,i;
	bool s;
	if(n<0){
		n=-1*n;//if n is negative turn it positive
		}
	k=n;
	i=2;
	printf("the prime factorization  %d = ",n);
	while(n>1){
		s=isPrime(i);//checking if i is prime
		if(n%i==0&&s==true){
					if(n!=i){
					printf("%d*",i);//if i is a prime divsor write it
							}
					else{
						printf("%d",i);
					}
					n=n/i;
					}
		else{
			i++;//if i is not a divisor check the next number
			}			
	}
	if(n==0){
		printf("\nthe prime factorazation of 0 is undefined\n");//a special case for 0
	}
}
bool isHarshad(int n){
	int l;
	l=sumOfDigits(n);
		if(n%l==0){
			return true;
	}
	else{
		return false;
	}
}
unsigned long catalanNumber(int n){
	long long l,s,j;
	unsigned long c;
	l=factlonglong(2*n);
	printf("%ld\n",l);
	s=factlonglong(n+1);	//the formule for catalan numbers
	j=factlonglong(n);
	c=l/s;
	c=c/j;
	return c;
} 
void pascalTriangle(int n){
int c,i,s,j,l,k ;
for(k=0;k<=n;k++){
for(i=0;i<=k;i++){
				c=chose(k,i);
				printf("%d ",c);
				}
		printf("\n");
	}
	}
int sumOfPrimes(int n){
	bool j;
	int i,s;
	s=0;
	for(i=2;i<=n;i++){
		j=isPrime(i);
		if(j==true){
			s=s+i;
		}
	}
	return s;
}
int Bellnumber(int n){
	int i;
	int b=1;
	for(i=1;i<=n;i++){
		b=b+chose(n,i)*b;
					}
	return b;
}
bool isKaprekar(int n){
	int y,k,z,x;
	y=numberOfDigit(n);
	x=(n*n)/intpower(10,y);
	k=(n*n)/intpower(10,y)+(n*n)%intpower(10,y);
	z=removeZero((n*n)/intpower(10,y))+(n*n)%intpower(10,y);//removing zero then adding
	if(n==k||n==z){//if one of these numbers fill the condition n is kapreker number
					return true;
					}
		else{
			return false;
		}
}

int gcd (int a,int b){
	int s,k ;
		if(a<0){
				a=-1*a; //if the number n is negative we turn it to positive
				}
		if(b<0){
				b=-1*b;//if the number b is negative we turn it to positive
				}
		
	if (b>a){
			k = a ;
			a = b ;	//to switch number n and b if b>n
			b = k ;
			}
	s=0;
	do{
				s = a%b ;
				a = b ;		// the euclidian method of calculating gcd and s is pgcd
				b = s ;
	}
	while(s>0);
	return a;
	}
int lcm (int a,int b){
	int l,p;
	p=gcd(a,b);//pgcd of n and b
	l=(a*b)/p;//clculting lcm using the rule between lcm and gcd
	return l;
	}
bool isArmstrong(int n){
	int s,k,j,i,ind,pow;
	if (n<0){
			return false;
			}
	k=n;
	ind=n;
	j=0;
	while(k>0){
		k = k/10;//calculating the number of digits
		j++;
	}
	s=0;
	while(n>0){
				pow=1;
				for(i=1;i<=j;i++){
					pow=pow*(n%10);//calculting pow(n%10,j)
				}
				s = s + pow ;//the of each digit raised to the power of number of digits
				n = n/10;
	}
	if(s==ind){
			return true;
			}
	else{
		return false;
	}
			
}
void fibonacciSeries (int n){
	if(n<0){
		printf("no terms");
						}
	else{
	int s,i,m,d;
	m =0;// it is u(n)
	d =1 ;// it is u(n+1)
	s =0;// it is u(n+2)
	printf("the sequence is : ");
	for (i=1;i<=n;i++){
		printf("%d,",m);
		s = (d+m) ;
		m = d ;				//printing the digits
		d = s ;
	}}
}
 bool isPerfect (int n){
	int s,j;
	s = 0 ;
	if(n<6){
		return false;
	}
	for(j=1;j<n;j++){
					if(n%j==0){
								s = s+j ;//calculting the sum of divisor except n
								}
					}
					if(s==n){
							return true;//it is perfect sum of divisors equall n 
							}
		else{
			return false;// it is not perfect
			}
	}
bool isAutomorphic(int n){
	int s,i,k,l;
	s=n*n;
	k=numberOfDigit(n);
	l=s%intpower(10,k);//taking the lst digits for comaprison
	if(l==n){
		return true;//checking if n square have n
	}
	else{
		return false;
	}	
}
void toBinary (int n){
	int k,s,pow;
	pow=1;
	k=0;
	while(n>0){
		s=n%2;
		k=s*pow+k;
		pow=pow*10;
		n=n/2;
	}
				printf("%d",k);
				
}
bool isSmith(int n){
	int l, k,i,sum,si;
	l=sumOfDigits(n);
	bool s,v;
	v=isPrime(n);
	if(v==true){
		return false;
	}
	if(n<0){
		n=-1*n;
	}
	sum=0;
	k=n;
	i=2;
	while(n>1){
		s=isPrime(i);//checking if i is prime
		if(n%i==0&&s==true){
					//if i is a prime divsor write it
					//si=sumOfDigits(i);
					sum+=sumOfDigits(i);
					n=n/i;
					}
		else{
			i++;//if i is not a divisor check the next number
			}			
	}
	if(n==0){
		return false;
	}
	if(l==sum){
		return true;
	}
	else{
		return false;
	}
}
bool isNarcissistic(int n){
	bool v;
	v=isArmstrong(n);//they are the same thing
	return v;
}
bool isDeficient(int n){
	int s;
	if(n<0){
		return false;
	}
	s=sumDivisors(n)-n;//the sum of the divisors with out n
	if(s<n){
		return true;
	}
	else{
		return false;
	}
	
}
