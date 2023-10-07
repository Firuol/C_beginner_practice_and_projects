#include <stdio.h>

int main(){

int mek=100;
float k=1.2456789;
char h='best';
printf ("hi bestie \n\n how are u my dear\n");
printf("my favourite number is %d\n" ,mek);
printf("my favourite decimal number is %f\n", k );
printf("%c\n", h);
/*i missed u so muchbfbewjhsdj
dfdsd
*/
//To combine both text and a variable, separate them with a comma inside the printf() function:
int myNum = 15;
printf("My favorite number is: %d\n", myNum);

//to print different types in a single printf() function, you can use the following:
int myNum2 = 15;
char myLetter = 'D';
printf("my number is %d and my character is %c\n", myNum2, myLetter);
// changing variable value
int a=1;
a=3;
printf("the value of a is %d\n", a);
// assigning value of one variable to the other
int b=11;
int c=22;
b=c; // assigning value of c to b
printf("the value of b is now %d and the value of c is %d\n" ,b ,c);
// to declare multiple variable
int x = 5, y = 6, z = 50;
printf("%d\n", x + y + z);
// to assign multi together
int e, f , g ;
e=f=g=10;
printf("%d\n", e + f + g);
//type conversion
float sum= (float) 25/3;
printf("%.3f\n", sum);
//When you declare a constant variable, it must be assigned with a value:
const int minutesPerHour = 60;
printf("minutesPerHour is always = %i\n", minutesPerHour);
return 0;}
