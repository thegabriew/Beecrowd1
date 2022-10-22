#include <stdio.h>
#include<math.h>
 
int main() {
 
int a, b, c;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a<b<c){
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	
} if((!(a<b<c))&&(b<a<c)){
	
	printf("\n%d\n",b);
	printf("%d\n",a);
	printf("%d\n",c);
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
} if((!(a<b<c))&&(!(b<a<c))&&(b<c<a)){
	
	printf("\n%d\n",b);
	printf("%d\n",c);
	printf("%d\n",a);
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
}  if((!(a<b<c))&&(!(b<a<c))&&(!(b<c<a))&&(c<b<a)){
	
	printf("\n%d\n",c);
	printf("%d\n",b);
	printf("%d\n",a);
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
} if((!(a<b<c))&&(!(b<a<c))&&(!(b<c<a))&&(!(c<b<a))&&(c<a<b)){
	
	printf("\n%d\n",c);
	printf("%d\n",a);
	printf("%d\n",b);
	
	printf("\n%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
}

    return 0;
}
