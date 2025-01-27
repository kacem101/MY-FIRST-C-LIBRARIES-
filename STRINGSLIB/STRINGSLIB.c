#include "STRINGSLIB.h"
#include <stdio.h>
#include <stdbool.h>
void removeHashtag(char* str){
	int l,c,i,j;
	l=stringLenght(str);
	char temp[l];
	c=0;
	for(i=0;i<l;i++){
		if(str[i]!='#'){
		temp[c]=str[i];
		c++;
		}
		}
		for(j=0;j<l;j++){
			str[j]=temp[j];
		}
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
void stringCopy(char* dest, const char* src){
	int i,l;
	l=stringLenghtconst(src);
	for(i=0;i<l;i++){
		dest[i]=src[i];
	}
}
void stringCopyGeneral(char*dest,char*src){
	int i,l;
	l=stringLenght(src);
	for(i=0;i<l;i++){
		dest[i]=src[i];
	}
}
int stringCompare(const char* str1, const char* str2){
	int d,l,k,c;
	l=stringLenghtconst(str1);
	k=stringLenghtconst(str2);
	d=0;
	while(d<l&&d<k){
		if(str1[d]<str2[d]){
			return 1;
		}
		if(str1[d]>str2[d]){
			return -1;
		}
		d++;
					}
	if(l>k){
		return -1;
	}
	if(l<k){
		return 1;
	}
	return 0;
}
int stringCompareGenral(char* str1,char* str2){
	int d,l,k,c;
	l=stringLenght(str1);
	k=stringLenght(str2);
	d=0;
	while(d<l&&d<k){
		if(str1[d]<str2[d]){
			return 1;
		}
		if(str1[d]>str2[d]){
			return -1;
		}
		d++;
					}
	if(l>k){
		return -1;
	}
	if(l<k){
		return 1;
	}
	
	return 0;
}
bool isEmpty(char* str){
	int l;
	l=stringLenght(str);
	if(l==0){
		return true;
	}
	else{
	return false;
	}
}
void stringConcat(char* dest, const char* src){
	int c,i,l,k;
	l=stringLenght(dest);
	k=stringLenghtconst(src);
	dest[l]=32;
	c=0;
	for(i=l+1;i<k+l+1;i++){
		dest[i]=src[c];
		c++;
	}
	
}
void stringConcatGeneral(char* dest, char* src){
	int c,i,l,k;
	l=stringLenght(dest);
	k=stringLenghtconst(src);
	dest[l]=32;
	c=0;
	for(i=l+1;i<k+l+1;i++){
		dest[i]=src[c];
		c++;
	}
	
}
void swapChar(char*n,char*b){
	char temp;
	temp=*n;
	*n=*b;
	*b=temp;
}
void reverseString(char*str){
	int i,l;
	l=stringLenght(str);
	for(i=0;i<l/2;i++){
		swapChar(&str[i],&str[l-i-1]);
		}	
}
bool isCharacter(char c){
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
bool isUpper(char c){
	
	if(c>=65&&c<=90){
					return true;
					}
	else{
		return false;
	}

}
void toUpperCase(char* str){
	bool v,m;
	int l,i;
	l=stringLenght(str);
	for(i=0;i<l;i++){
	v=isCharacter(str[i]);
	m=isUpper(str[i]);
	if(v&&!m){
			str[i]=str[i]-32;
			}
	}
}
void toLowerCase(char* str){
	bool v,m;
	int l,i;
	l=stringLenght(str);
	for(i=0;i<l;i++){
	v=isCharacter(str[i]);
	m=isUpper(str[i]);
	if(v&&m){
			str[i]=str[i]+32;
			}
	}
}
bool isPalindrome(char* str){
	int l,x;
	l=stringLenght(str);
	char temp[100];
	stringCopyGeneral(temp,str);
	reverseString(temp);
	x=stringCompareGenral(str,temp);
	if (x==0){
	return true;
		}
	else{
		return false;
	}
}
void countVowelsConsonants(char* str, int* vowels, int* consonants){
	int i,l;
	bool v;
	l=stringLenght(str);
	*vowels=0;
	*consonants=0;
	for(i=0;i<l;i++){
		v=isCharacter(str[i]);
		if(v){
			if(str[i]=='i'||str[i]=='o'||str[i]=='i'||str[i]=='y'||str[i]=='e'||str[i]=='a'){
				*vowels=* vowels+1;
			}
			else{
				*consonants= *consonants+1;
			}
		}
	}
}
int findSubstring(const char* str, const char* sub){
	int d,c,i,k,l;
	l=stringLenghtconst(str);
	k=stringLenghtconst(sub);
	c=0;
	d=-1;
	for(i=0;i<l;i++){
		if(str[i]==sub[c]){
			c++;
			if(c==k){
				d=i+1-k;
				return d;
			}
		}
		else{
			if(str[i]==sub[0]){
				c=1;
			}
			else{
				c=0;
				}
			}
		}
		return d;
}
void removeWhitespaces(char* str){
	int l,c,i,j;
	l=stringLenght(str);
	char temp[l];
	c=0;
	for(i=0;i<l;i++){
		if(str[i]!=' '){
		temp[c]=str[i];
		c++;
		}
		}
		for(j=0;j<l;j++){
			str[j]=temp[j];
		}
}
void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d,",arr[i]);
	}
	
}
void initializeArray(int arr[],int size,int value){
	int i;
	for(i=0;i<size;i++){
		arr[i]=value;
	}
	
	
}
void charFrequency(char* str, int* freq){
	int i,j,c,k,d,size;
	size=stringLenght(str);
	for(i=0;i<size;i++){
		c=0;
		d=0;
		for(j=0;j<size;j++){
							if(str[i]==str[j]){
												c=c+1;
												}
							}
		for(k=i;k<size;k++){
			if(str[i]==str[k]){
												d=d+1;
												}
		}
		if(d==c){
		freq[i]=c;
		printf("the frequency of %c is %d\n",str[i],c);				
						}}	
										}
bool isAnagram(char* str1, char* str2){
	int l,k,i,j,f,c,n;
	bool v=true;
	l=stringLenght(str1);
	k=stringLenght(str2);
	if(l<k){
		n=k;
			}
	else{
		n=l;
		}
	int ch[n];
	initializeArray(ch,l,0);
	for(i=0;i<l;i++){
		c++;
		for(j=0;j<k;j++){
			if(ch[j]==0){
			if(str1[i]==str2[j]){
				//printf("ch %c and ch %c \n",str1[i],str2[j]);
			if(ch[j]==0){
				ch[j]=1;
				break;
						}
								}
						}
						}	
					}
	for(f=0;f<n;f++){
		if(ch[f]==0){
	v=false; 
					}
					}
	return v;
									}
int countWords(char* str){
	int l,i,c,d;
	bool v;
	l=stringLenght(str);
	c=0;
	for(i=0;i<l;i++){
		v=isCharacter(str[i]);
		if(v){
			c++;
			if(c==2){
				d++;
			}
		}
		else{
			c=0;
		}
	}
	return d;
}
void removeDuplicates (char* str){
	int i,j,c,k,d,size ;
	size=stringLenght(str);
	for(i=0;i<size;i++){
		c=0;
		d=0;
		for(k=i+1;k<size;k++){
			if(str[i]==str[k]){
												str[k]=35;
												}
		}
	}
	removeHashtag(str);
	}
void compressString(char* str, char* result){
	int l,i,c,d;
	l=stringLenght(str);
	printf("\n%d\n",l);
	c=1;
	d=0;
	for(i=0;i<l;i++){
		if(str[i]==str[i+1]){
			c++;
			}
		else{
			//printf("\n d= %c ",str[i]);
			result[d]=str[i];
			d++;
			result[d]=c+'0';
			c=1;
			d++;
		}
		}
	}
void longestWord(char* str, char* result){
	int l,i,c,d,max,k,j;
	bool v;
	l=stringLenght(str);
	c=0;
	max=0;
	for(i=0;i<l;i++){
		v=isCharacter(str[i]);
		if(v){
			c++;
		}
		else{
			if(c>max){
				k=0;
				for(j=c;j>=0;j--){
					result[j]=str[i-k];
					k++;
				}
			}
			c=0;
		}
	}
}
void rightShiftString(char* str,int rotations){
	int i,k,size;
	size=stringLenght(str);
	rotations=rotations%size;
	char temp[size];
	for(i=0;i<size;i++){
	if(i+rotations<size){
	temp[i+rotations]=str[i];	
	}
	else{
	temp[i-size+rotations]=str[i];
	}}
	for(k=0;k<size;k++){
		str[k]=temp[k];
	}
}
bool isRotation(char* str1, char* str2){
	int l,i,x;
	l=stringLenght(str1);
	char temp[l];
	stringCopyGeneral(temp,str1);
	for(i=0;i<l;i++){
		rightShiftString(temp,i);
		printf("\n%s",temp);
		x=stringCompareGenral(str2,temp);
		printf("\nx= %d\n",x);
		if(x==0){
			return true;
		}
	}
	return false;
}
int countChar(char* str, char ch){
	int i,c,l;
	l=stringLenght(str);
	c=0;
	for(i=0;i<l;i++){
		if(str[i]==ch){
			c++;
		}
	}
	return c;
}
int findSubstringGeneral(char* str,char* sub,int start ){
	int d,c,i,k,l;
	l=stringLenghtconst(str);
	k=stringLenghtconst(sub);
	c=0;
	d=0;
	for(i=start;i<l;i++){
		if(str[i]==sub[c]){
			c++;
			if(c==k){
				d=i+1-k;
				return d;
			}
		}
		else{
			if(str[i]==sub[0]){
				c=1;
			}
			else{
				c=0;
				}
			}
		}
		return d;
}
void findAndReplace(char* str, char* find, char* replace){
	int l,k,j,i,f,s,d,ind1,ind,m;
	d=stringLenght(str);
	l=stringLenght(find);
	k=stringLenght(replace);
	char temp[d+k];
	ind=-1;
	s=0;
	j=0;
	ind1=findSubstringGeneral(str,find,0);
	for(i=0;i<d+k;i++){
		ind=findSubstringGeneral(str,find,s);
		printf("i =%d and ind = %d\n",i,ind);
		if(i>=ind&&i<ind+l){
			temp[i]=replace[j%k];
			printf("temp in replace %c",temp[i]);
			j++;
		}
		else{
			temp[i]=str[i];
		}
		if(i>=ind+l){
			s=ind+l;
		}
	}
	stringCopyGeneral(str,temp);
}
