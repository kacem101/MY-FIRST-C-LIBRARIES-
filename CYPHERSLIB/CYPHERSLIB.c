#include "CYPHERSLIB.h"
#include <stdio.h>
#include <stdbool.h>
void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d,",arr[i]);
	}
	
}bool isCharacter(char c){
	bool v;
	v=false;
if(c>=65&&c<=90){
				v=true;
				}
if(c>=97&&c<=122){
				v=true;
				}
return v;
}
int stringLenght(char*str){
	int i,counter;
	i=0;
	counter=0;
	while(str[i]!='\0'){
		counter++;
		i++;
	}
	return counter;
}
int stringLenghtconst(const char*str){
	int i,counter;
	i=0;
	counter=0;
	while(str[i]!='\0'){
		counter++;
		i++;
	}
	return counter;
}
void caesarCipher(char text[],int shift){
	int size,i,y;
	size=stringLenght(text);
	shift=(shift+26)%26;
	for(i=0;i<size;i++){
	if(text[i]>=65&&text[i]<=90){
		text[i]=(text[i]+shift);
		if(text[i]>90){
		y=text[i]-90;
		text[i]=64+y;
	}}
	if(text[i]>=97&&text[i]<=122){
		text[i]=(text[i]+shift);
		if(text[i]>122){
		y=text[i]-122;
		text[i]=96+y;
	}
		}
	}
}
void atbashCipher(char* text){
	int size,i,k,l,s,j,y;
	size=stringLenght(text);
	for(k=0;k<size;k++){
		j=25;
	if(text[k]>=65&&text[k]<=90){
	for(i=65;i<=90;i++){
	if(text[k]==i){
					text[k]=text[k]+j;
					j=j-2;
					break;
					}
		else	{
				j=j-2;
				}
						}
						}

if(text[k]>=97&&text[k]<=122){
	for(i=97;i<=122;i++){
	if(text[k]==i){
					text[k]=text[k]+j;
					j=j-2;
					break;
					}
		else	{
				j=j-2;
				}
						}
						}
}}
void substiutionCipher(char*text,const char*key){
	int size,i,k,l,s,j,y;
	bool v;
	size=stringLenght(text);
	char temp[size];
	for(y=0;y<size;y++){
									temp[y]=text[y];
						}
	for(k=65;k<=90;k++){
						for(i=0;i<size;i++){
											if(k==text[i]){
															j=k%65;
															temp[i]=key[j+26];
															
															}	
											}
	}
	for(l=97;l<=122;l++){
						for(j=0;j<size;j++){
											if(l==text[j]){
															temp[j]=key[l%97];
															}	
											
											}
	
	}
	for(s=0;s<size;s++){
		text[s]=temp[s];
	}
}

bool isUpper(char c){
	if(c>=65&&c<=90){
					return true;
					}
	else{
		return false;
	}

}
void readyForRailCipher(const char*text,char*temp){
	int i,l,j,k;
	bool m,v;
	l=stringLenghtconst(text);
	k=0;
	for(i=0;i<l;i++){
		v=isCharacter(text[i]);
		if(v==true){
			m=isUpper(text[i]);
			if(m==true){
						temp[k]=text[i];
						}
			else{
				temp[k]=text[i]-32;
				}
			k++;
		}
	}
	
}
void railFence(char*text,char*resault,int depth){
	int y,i,c,l,k;
	y=depth*2-2;
	printf("%d\n",y);
	l=stringLenght(text);
	printf("%s\n",text);
	k=0;
	for(i=0;i<depth;i++){
					c=0;
					printf("%d   ",i);
					while(i+c<l){
											if(i==0||i==depth-1){
																resault[k]=text[i+c];
																k++;
																c=c+y;
																printf(" %d =%c,  ",k-1,resault[k-1]);
																}
					else{
					if(i+c<l){
					resault[k]=text[i+c];
					k++;
					printf(" %d =%c,  ",k-1,resault[k-1]);
								}
					if(y-i+c<l){
					resault[k]=text[y-i+c];
					k++;
					printf(" %d =%c,  ",k-1,resault[k-1]);		
							}
							c=c+y;
						}
						}
						printf("\n");
						}
					}
void railFenceCipher(const char*text,char*resault,int depth){
	int l;
	l=stringLenghtconst(text);
	char temp[l];
	readyForRailCipher(text,temp);
	railFence(temp,resault,depth);
	printf("\nthe final cipher is %s",resault);
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
int  intpower(int b,int n){
	int i,k;
	k=1;
	for(i=1;i<=n;i++){
		k=k*b;
	}
	return k;
}
void xorCipher(char*text,const char*key,char*textchi){
	int l1,l2,i,j,digit,l;
	l1=stringLenght(text);
	l2=stringLenghtconst(key);
	int temp [l1];
	//char textchi[l1*3];
	int k=0;
	for(i=0;i<l1;i++){	printf("\ntext = %c , key =%c\n",text[i],key[i%l2]);
						temp[i]=text[i]^key[i%l2];
						text[i]=temp[i];
						printf("%d\n",temp[i]);
						if(temp[i]==0){
							textchi[k]=48;
							k++;
						}
						while(temp[i]>0){
																	
											j=numberOfDigit(temp[i]);
											digit=temp[i]/intpower(10,j-1);
											//printf("%d\n",digit);
											textchi[k]=48+digit;
											l=intpower(10,j-1);
											temp[i]=temp[i]%l;
											j--;
											k++;
										}
						while(j!=0){
								textchi[k]=48;
								k++;
								j--;
								}
						}
	printf(" finally %s \n",textchi);
	printf("temp is %s\n",text);
	}
void vigenereCipher(char *text, const char *key, int encrypt){
	int i,l1,l2,shift,y,j;
	l1=stringLenght(text);
	l2=stringLenghtconst(key);
	if(encrypt==1){
	for(i=0;i<l1;i++){
	if(text[i]>=65&&text[i]<=90){
		shift=key[i%l2]%65;
		text[i]=(text[i]+shift);
		if(text[i]>90){
		y=text[i]-90;
		text[i]=64+y;
	}}
	}}
	else{
	for(j=0;j<l1;j++){
	if(text[j]>=65&&text[j]<=90){
		if(text[j]<key[j%l2]){
							text[j]=text[j]-key[j%l2]+90;
							}
		if(text[j]==key[j]){
			text[j]=text[j];
		}
		if(text[j]>key[j%l2]){
			text[j]=text[j]-key[j%l2]+64;
		}
	}
}
}}
