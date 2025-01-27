#include "ARRAYSLIB.h"
#include <stdio.h>
#include <stdbool.h>

void scanArray(int arr[], int size){ 
 int i; 
 for(i=0;i<size;i++){ 
  		scanf("%d",&arr[i]); 
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
int findMax(int arr[],int size){
	int max=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}int findMin(int arr[],int size){
	int min=arr[0];
	int i;
	for(i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
void swapArray(int*n,int*b){
	int temp;
	temp=*n;
	*n=*b;
	*b=temp;
}
int sumArray(int arr[],int size){
	int sum=0;
	int i;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
		}
	return sum;
}
double averageArray(int arr[],int size){
	double k;
	k=sumArray(arr,size);
return k/size;
}
bool isSorted(int arr[],int size){ 
 bool  v=true; 
 int i; 
 for(i=0;i<size-1;i++){ 
  if(arr[i]>arr[i+1]){ 
   v=false; 
   break ; 
  } 
 } 
 return v; 
}

void reverseArray(int arr[],int size){
	int i;
	for(i=0;i<size/2;i++){
		swapArray(&arr[i],&arr[size-i-1]);
		}	
}
void countEvenOdd(int arr[],int size,int*evenCount,int*oddCount){
	*oddCount=0;
	*evenCount=0;
	int i;
	for(i=0;i<size;i++){
		if(arr[i]%2==1){
			*oddCount=*oddCount+1;
		}
		else{
			*evenCount=*evenCount+1;
		}
}}
int secondLargest(int arr[],int size){
	int max2;
	int i,j,c;
	for(i=0;i<size;i++){
		c=0;
		for(j=0;j<size;j++){
			if(arr[i]<arr[j]){
							c++;
						}
			if(c>2){
				break;
			}}
		if(c==1){
			max2=arr[i];
			break;
				}	
						}
	return max2;
}
void elementFrequency(int arr[],int size){
	int i,j,c,k,d;
	for(i=0;i<size;i++){
		c=0;
		d=0;
		for(j=0;j<size;j++){
							if(arr[i]==arr[j]){
												c=c+1;
												}
							}
		for(k=i;k<size;k++){
			if(arr[i]==arr[k]){
												d=d+1;
												}
		}
		if(d==c){
		printf("the frequency of %d is %d\n",arr[i],c);				
						}}	
	}
int removeDuplicates(int arr[],int size){
	int k,s,j,c,i,d;
	s=0;
	for(i=0;i<size;i++){
		c=0;
		d=0;
		for(j=0;j<size;j++){
							if(arr[i]==arr[j]){
												c=c+1;
												}
							}
		for(k=i;k<size;k++){
			if(arr[i]==arr[k]){
												d=d+1;
												}
		}
		if(d==c){
		s=s+1;		
						}}	
	return s;
}

int findMajorityElement(int arr[], int size) {
    int i, j, count, majorityElement = -1;
    for (i= 0; i < size; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > size / 2) {
            majorityElement = arr[i];
            break; 
        }
    }
    return majorityElement;
}
int binarySearch(int arr[],int size,int target){
	int mid,high,low,com;
	high=size-1;
	low=0;
	while(low<=high){
	mid=(high+low)/2;
	com=arr[mid];
	if(com!=target){
		if (target>com){
			low=mid+1;
					}
		else{
			high=mid-1;
				}		
				}
	else {
		return mid;
							}
			}
	return 0;
				
		}
	//return com;
void selectionSort(int arr[],int size){
	int min,i,k,c;
	for(k=0;k<size;k++){
	min=arr[k];
	c=k;
	for(i=k;i<size;i++){
		if(arr[i]<min){
			c=i;
		}
	}
	swapArray(&arr[k],&arr[c]);
	}
}
int linearSearch(int arr[],int size,int target){
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}
}
void leftShift(int arr[],int size,int rotations){
	int i,k;
	rotations=rotations%size;
	int temp[size];
	for(i=0;i<size;i++){
	if(i-rotations>=0){
	temp[i-rotations]=arr[i];	
	}
	else{
	temp[size-rotations+i]=arr[i];
	}}
	for(k=0;k<size;k++){
		arr[k]=temp[k];
	}
}
void rightShift(int arr[],int size,int rotations){
	int i,k;
	rotations=rotations%size;
	int temp[size];
	for(i=0;i<size;i++){
	if(i+rotations<size){
	temp[i+rotations]=arr[i];	
	}
	else{
	temp[i-size+rotations]=arr[i];
	}}
	for(k=0;k<size;k++){
		arr[k]=temp[k];
	}
}
int findMissingNumber(int arr[],int size){
	int miss,i;
	for(i=0;i<size-1;i++){
		if(arr[i+1]-arr[i]!=1){
		miss=arr[i+1]-1;	
		}
	}
	return miss;
}
void bubbleSort(int arr[],int size){
	bool s;
	int i;
	s=isSorted(arr,size);
	while(s==false){
	for(i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
			swapArray(&arr[i],&arr[i+1]);
		}
		s=isSorted(arr,size);
	}
	}
}
void findPairsWithSum(int arr[],int size,int sum){
	int k,i,s;
	bubbleSort(arr,size);
	k=0;
	for(i=size-1;i>=0;i--){
	s=arr[k]+arr[i];
	if(k>=i){
		break;
	}
	if(s==sum){
		printf("(%d,%d)",arr[k],arr[i]);
		k=k+1;
	}
	}	
}
void findSubArrayWithSum(int arr[],int size,int sum){
	int s,l,i,j,k;
	for(i=0;i<size;i++){
		s=0;
		for(k=i;k<size;k++){
			s=s+arr[k];
			//printf("\n%d\n",s);
			if(s==sum){
				j=i;
						printf("\nthe sub array is ");
						while(s>0){
							s=s-arr[j];
							printf("%d,",arr[j]);
							printf("index =%d,",j);
							//printf("%d,",arr[j]);
							j=j+1;
						}
						break;
			}
			if(s>sum){
				break;
			}
		}
	}
}

int LongestIncreasingSubSequence(int arr[],int size){
	int max,ind,i;
	max=1;
	ind=0;
	for(i=0;i<size-1;i++){
		if(arr[i]<arr[i+1]){
						max++;
							}
		else{
			if(ind<max){
						ind=max;
						}
			max=1;
		}
	}
	if(ind<max){
						ind=max;
				}
	return ind;
}
void findDuplicates(int arr[],int size){
	int i,j,c,k,d;
	int temp[size];
	for(i=0;i<size;i++){
		c=0;
		d=0;
		for(j=0;j<size;j++){
							if(arr[i]==arr[j]){
												temp[c]=j;
												c=c+1;
												}
							}
		for(k=i;k<size;k++){
			if(arr[i]==arr[k]){
												d=d+1;
												}
		}
		if(d==c&&c!=1){
		printf(" \nthe duplicates  of %d are in the indexes ",arr[i]);
		printArray(temp,c);				
						}}	
}
void findIntersection(int arr1[],int size1,int arr2[],int size2){
	int i,j,d,c;
	bool v;
if(size1<size2){
				size1=size2; 
				}
int temp[size1];
for(i=0;i<size2;i++){
		d=0;
		v=false;
		for(j=0;j<size1;j++){
			
							if(arr2[i]==arr1[j]){
												v=true;
												break;
												}
												}
							if(v==true){
										temp[c]=arr2[i];
										c++;
										}
							
												
						}
		printArray(temp,c);
}
void findUnion(int arr1[],int size1,int arr2[],int size2){
	int i,j,l,c,k,d;
	bool v;
	int temp[size1+size2];
	c=0;
	for(l=0;l<size1;l++){
						temp[l]=arr1[l];
						}
	c=0;
	for(i=0;i<size2;i++){
		d=0;
		v=true;
		for(j=0;j<size1;j++){
							if(arr2[i]==arr1[j]){
												v=false;
												break;
												}
												}
							if(v==true){
										temp[size1+c]=arr2[i];
										c++;
										
										}
							
												
						}
		//l=removeDuplicate(test,size1+c);
		printArray(temp,size1+c);
}
void insertionSort(int arr[], int size){ 
 int i,j; 
 for(i=1;i<size;i++){ 
  int tmp=arr[i]; 
  j=i-1; 
  while(j>=0 && arr[j] > tmp){ 
   arr[j+1]=arr[j]; 
   j=j-1; 
  } 
  arr[j+1]=tmp; 
 } 
}

