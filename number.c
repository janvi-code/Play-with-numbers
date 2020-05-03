#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int choice,n,r,count=0,i,m,min,sum=0,r1,r2,a,b,c,inches,inches1,inches2,feet,feet1,feet2,tfeet1,tfeet2,k1,k2,div,num,rem,added_no,range,d,e,lower=0,higher=0;
    int n1,n2,pow1,pow2,j=0,k,q,divisor,remainder,quotient,divident,check_multiple1,check_multiple2,divisor1,divisor2,ques1,ques2,x,sides,difference,y,upper,rev,t;
    float w;
    do
    {
    printf("\n\n\n\t\t\t\t====================================================================================================================================================\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tNUMBER SYSTEM\n");
    printf("\t\t\t\t====================================================================================================================================================\n\n\n");
    printf("1. which digit is at which place\n\n2. Face and place value\n\n3. Even-Odd\n\n4. Prime number\n\n5. Composite number\n\n");
    printf("6. Coprime numbers\n\n7. Rational and irrational\n\n8. Divisibility by 2\n\n9. Divisibility by 3\n\n");
    printf("10. Divisibility by 4\n\n11. Divisibilty by 5\n\n12. Divisibility by 6\n\n13. Triangle\n\n");
    printf("14. Height and inches\n\n15. No. To be added to make it fully divisible by any number\n\n16. To check if a num is completely divisible or not\n\n");
    printf("17. Sum of first n multiples of a number\n\n18. Sum of first n even and odd numbers\n\n19. To count no. Of prime numbers between given range\n\n");
    printf("20. A^b-C^d is divisible by which num\n\n21. Sum of face values of two numbers\n\n22. Given divisior & remainder to find another remainder with that same number\n\n");
    printf("23. To find remainder and questionent\n\n24. To find divident\n\n25. Sum of cubes of numbers in a limit\n\n26. Sum of divisors of a number\n\n");
    printf("27. Difference b/w cubes and square of numbers in angiven range\n\n28. To find multiples of two numbers between a given range\n\n");
    printf("29. To find quotient if two divisors and a common remainder is given\n\n30. To find a number when a number is subtracted from the number itself and gives the same value as sum of all angles of a polygon\n\n");
    printf("31. Given sum and difference of two digit number and to find product of those digits\n\n32. To find the largest possible remainder when the number is reversed and largest of them is divided by smaller \n\n\n");
    printf("Enter a choice between 1-32: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            printf("enter a number: ");
            scanf("%d",&n);
           r=n%10;
        printf("\n%d is at unit\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at ten\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at hundred\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at thousand\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at ten thousand\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at lakh\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at ten lakh\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at crore\'s place",r);
        n=n/10;
        r=n%10;
        printf("\n%d is at ten crore\'s place",r);
        n=n/10;
     getch();
       system("cls");
         break;
    case 2:
        printf("enter a number: ");
    scanf("%d",&n);
           r=n%10;
printf("\n      \=face value of %d is %d",r,r);
       printf("\n      \= place value of %d is %d\*10\^0",r,r);
        n=n/10;
        r=n%10;
printf("\n      \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^1",r,r);
        n=n/10;
        r=n%10;
printf("\n    \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^2",r,r);
        n=n/10;
        r=n%10;
printf("\n    \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^3",r,r);
        n=n/10;
        r=n%10;
   printf("\n    \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^4",r,r);
        n=n/10;
        r=n%10;
printf("\n    \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^5",r,r);
        n=n/10;
        r=n%10;
          printf("\n    \=face value of %d is %d",r,r);
       printf("\n       \=place value of %d is %d\*10\^6",r,r);
        n=n/10;
        r=n%10;
printf("\n   \=face value of %d is %d",r,r);
       printf("\n      \=place value of %d is %d\*10\^7",r,r);
        n=n/10;
        r=n%10;
  printf("\n   \=face value of %d is %d",r,r);
       printf("\n     \= place value of %d is %d\*10\^8",r,r);
        n=n/10;
   getch();
   system("cls");
     break;
    case 3:
        printf("enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number %d is even",n);
    }
    else
    {
        printf("the number %d is odd",n);
    }
   getch();
   system("cls");
     break;
    case 4:
            printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
  if(count==2)
  {
      printf("%d is prime number",n);
  }
else
{
    printf("%d is not prime number",n);

}
getch();
   system("cls");
     break;
    case 5:
        printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
  if(count>2 && n>1)
  {
      printf("%d is composite number",n);
  }
else
{
    printf("%d is not composite number",n);

}
getch();
   system("cls");
     break;
    case 6:
        printf("enter two numbers: ");
    scanf("%d %d",&n,&m);
  min=n<m?n:m;
  for( i=2;i<=min;i++)
  {
      if(n%i==0 && m%i==0)
      {
          break;
      }
  }
  if(i==min+1)
  {
      printf("%d,%d are coprime numbers",n,m);
  }
  else
  {
      printf("%d,%d are not coprime numbers",n,m);
  }

getch();
   system("cls");
     break;
    case 7:
        printf("enter two numbers: ");
    scanf("%d %d",&n,&m);

  if(m!=0)
 {
     printf("rational");
 }

 else
 {
     printf("irrational");
 }
getch();
   system("cls");
     break;
    case 8:
        printf("enter a num: ");
    scanf("%d",&n);
    r=n%10;
    if(r==0 || r%2==0)
    {
        printf("the number %d is divisible by 2",n);
    }
    else
    {
        printf("the number %d is not divisible by 2",n);
    }
getch();
   system("cls");
     break;
    case 9:
        printf("enter a num: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
    sum = sum+r;

    }
    if(sum%3==0)
    {
        printf("the number is divisible by 3");
    }
    else
    {
        printf("the number is not divisible by 3");
    }
getch();
   system("cls");
     break;
    case 10:
            printf("enter a num: ");
    scanf("%d",&n);
        r1=n%10;
        n=n/10;
        r2=n%10;
        r=(r2*10)+r1;
    if(r%4==0)
    {
        printf("the number is divisible by 4");
    }
    else
    {
        printf("the number is not divisible by 4");
    }
getch();
   system("cls");
     break;
    case 11:
            printf("enter a num: ");
    scanf("%d",&n);
    r=n%10;
    if(r==0 || r==5)
    {
        printf("%d is divisible by 5",n);
    }
    else
    {
        printf("%d is not divisible by 5",n);
    }
getch();
   system("cls");
     break;
    case 12:
            printf("enter a num: ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
    {
        printf("%d is divisible by 6",n);
    }
    else
    {
        printf("%d is not divisible by 6",n);
    }
getch();
   system("cls");
     break;
    case 13:
        printf("enter sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c && b==c )
    {
        printf("equilateral triangle");
    }
    else if(a!=b && a==c || a==b && b!=c || a!=b && b==c )
    {

        printf("isoscales triangle");
    }
    else
    {
        printf("scalen triangle");
    }
getch();
   system("cls");
     break;
    case 14:
            printf("Enter height of student 1\nfeet1 :");    //taking inputs from user
    scanf(" %d",&feet1);
    printf("inches1 :");
    scanf("%d",&inches1);
    printf("Enter height of student 2\n");
    printf("feet2 :");
    scanf(" %d",&feet2);
    printf("inches2 :");
    scanf("%d",&inches2);
  if(feet1 >0 && feet2 > 0 && inches1 > 0 && inches2 > 0)  //defining condition for the inputs
  {
    k1=inches1%12;
   r1=inches1/12;
   tfeet1=feet1+r1;
   k2=inches2%12;
   r2=inches2/12;
   tfeet2=feet2+r2;
   feet=tfeet1+tfeet2;
    inches=k1+k2;
    printf("%d feet and %d inches",feet,inches); // printing the value
  }
  else
  {
      printf("invalid input");
  }
getch();
   system("cls");
     break;
    case 15:
            printf("enter two num:");
    scanf("%d\n%d",&num,&div);
    rem=num%div;
    added_no=div-rem;
    printf("%d",added_no);
getch();
   system("cls");
     break;
    case 16:
        printf("enter two num:");
    scanf("%d\n%d",&num,&div);
    rem=num%div;
    if(rem==0)
    printf("%d is divible by %d",num,div);
    else
        printf("%d is not divisible by %d",num,div);
getch();
   system("cls");
     break;
    case 17:
        printf("enter range:");
    scanf("%d",&range);
    printf("enter num:");
    scanf("%d",&num);
    d=range*(range+1);
    sum=(num*d)/2;
    printf("%d",sum);
getch();
   system("cls");
     break;
    case 18:
            printf("enter num:");
    scanf("%d",&n);
    if(n%2!=0)
        {
            d=pow(n,2);
    printf("sum of odd num=%d",d);
        }

    else
    {
        e=n*(n+1);
        printf("sum of even num=%d",e);
    }
getch();
   system("cls");
     break;
    case 19:
        {  sum=0;
         printf("enter lower no:");
    scanf("%d",&lower);
    printf("enter higher no:");
    scanf("%d",&higher);
    for(int i=lower;i<=higher;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            count=count+1;
        }
        if(count==2)
        sum=sum+1;
    }
    printf("total numbers between given range=%d",sum);
getch();
   system("cls");
     break;
        }
    case 20:
printf("enter first num and its power:");
    scanf("%d\n%d",&n1,&pow1);\
     printf("enter second num and its power:");
    scanf("%d\n%d",&n2,&pow2);
    j=pow(n1,pow1);
    k=pow(n2,pow2);
    m=j-k;
    for(int i=2;i<=m;i++)
    {
        if(m%i==0)
        {
            printf("%d\n",i);
        }
    }
getch();
   system("cls");
     break;
    case 21:
        printf("enter two numbers:");
    scanf("%d\n%d",&n1,&n2);
    sum=n1+n2;
    printf("face value sum=%d",sum);//face values is value of digit itself
getch();
   system("cls");
     break;
    case 22:
        printf("enter a div:");
    scanf("%d",&div);
    printf("enter a reminder:");
    scanf("%d",&rem);
    num=div+rem;
    printf("number=%d\n",num);
    printf("enter a number to divide it with: ");
    scanf("%d",&k);
    r=num%k;
    printf("new remainder=%d",r);
getch();
   system("cls");
     break;
    case 23:
          printf("enter a div:");
  scanf("%d",&div);
   printf("enter a num:");
  scanf("%d",&n);
  r=n%div;
  q=n/div;
  printf("remainder=%d",r);
  printf("\nquestionet=%d",q);
getch();
   system("cls");
     break;
    case 24:
         printf("enter a divisor:");
  scanf("%d",&divisor);
   printf("enter a remainder:");
  scanf("%d",&remainder);
  printf("enter a quotient:");
  scanf("%d",&quotient);
  divident=(divisor*quotient)+remainder;
  printf("divident=%d",divident);
getch();
   system("cls");
     break;
    case 25:
        printf("enter lower:");
  scanf("%d",&lower);
  printf("enter higher:");
  scanf("%d",&higher);
  for(int i=1;i<=higher;i++)
  {
      j=i*i*i;
      sum=sum+j;
  }
  printf("sum=%d",sum);
getch();
   system("cls");
     break;
    case 26:
        printf("enter lower:");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
  {
      if(num%i==0)
        sum=sum+i;
  }
  printf("%d",sum);
getch();
   system("cls");
     break;
    case 27:
          printf("enter lower:");
  scanf("%d",&lower);
  printf("enter higher:");
  scanf("%d",&higher);
  for(int i=1;i<=higher;i++)
  {
      j=i*i*i;
      k=i*i;
      b=j-k;
      sum=sum+b;
  }
  printf("sum=%d",sum);
getch();
   system("cls");
     break;
    case 28:
            printf("enter starting value: ");
    scanf("%d",&lower);
    printf("enter end value: ");
    scanf("%d",&higher);
    printf("enter first multiple to check:");
    scanf("%d",&check_multiple1);
    printf("enter second multiple to check:");
    scanf("%d",&check_multiple2);
    for(int i=lower+1;i<higher;i++)
    {
        if(i%check_multiple1 || i%check_multiple2)
            count++;
            if(i%(check_multiple1*check_multiple2)==0)
                j++;
    }
    printf("%d",(count-j));
getch();
   system("cls");
     break;
    case 29:
            printf("enter common remainder: ");
    scanf("%d",&rem);
    printf("enter first divisor:");
    scanf("%d",&divisor1);
    printf("enter second divisor:");
    scanf("%d",&divisor2);
    printf("enter quotient:");
    scanf("%d",&ques1);
    divident=divisor1*ques1+rem;
    ques2=(divident-rem)/divisor2;
    printf("correct quotient is %d",ques2);
getch();
   system("cls");
     break;
    case 30:
       do{
 printf("enter number of sides of polygon: ");
     scanf("%d",&sides);
     printf("\n\n1. sum of the measures of the interior angles of a polygon with n sides\n");
     printf("2. measure of each interior angle of an equiangular n-gon\n");
     printf("3. sum of the measures of the exterior angles of a polygon\n");
     printf("4. measure of each exterior angle of an equiangular n-gon");
     printf("\n\nEnter your choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
         sum=(sides-2)*180;
         printf("enter number:");
         scanf("%f",&w);
            if(w!=1)
            {
                x=sum/(1-w);
                printf("%d",x);
            }
            else
                printf("w cannot be equal to 1.");
            getch();
   system("cls");
     break;
     case 2:
        sum=180-(360/sides);
        printf("enter number:\n");
        scanf("%f",&w);
            if(w!=1)
            {
                x=sum/(1-w);
                printf("%d",x);
            }
            else
                printf("num cannot be equal to 1.");
               getch();
   system("cls");
     break;
     case 3:
        sum=360;
        printf("enter number:\n");
        scanf("%f",&w);
            if(w!=1)
            {
                x=sum/(1-w);
                printf("%d",x);
            }
            else
                printf("num cannot be equal to 1.");
               getch();
   system("cls");
     break;
     case 4:
        sum=360/sides;
        printf("enter number:\n");
        scanf("%f",&w);
            if(w!=1)
            {
                x=sum/(1-w);
                printf("%d",x);
            }
            else
                printf("num cannot be equal to 1.");
                getch();
   system("cls");
     break;
     }
     }while(choice!=5);
getch();
   system("cls");
     break;
     case 31:
        printf("enter sum: ");
 scanf("%d",&sum);
 printf("enter difference: ");
 scanf("%d",&difference);
 y=(sum-difference)/2;
x=(sum+difference)/2;
printf("Product of two digit number is %d",(x*y));
getch();
   system("cls");
     break;
     case 32:
        printf("enter number of digits: ");
    scanf("%d",&n);
    lower=pow(10,(n-1));
    upper=pow(10,n);
    for(int i=lower;i<=((upper-1)/2)+pow(10,(n-1));i++)
    {
        rev=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev>i)
        {
            d=rev%i;
            printf("%d\n",i);
        }
        else
        {
            d=i%rev;
            printf("%d\n",i);
        }
    }
getch();
   system("cls");
     break;
    }
    }while(choice>1 && choice<33);
}
