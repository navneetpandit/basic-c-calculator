#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, result, pi= 3.14, c;
    int i, n;
    char op, choice, q;
    do{
    system("cls");

    printf("Enter operation (+, -, *, /, ^, s for sqrt, f for factorial, r for area, l to check prime number): ");
    scanf(" %c", &op);

    switch(op) {
    case '+':
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        printf("Result: %.2f\n", a+b);
        break;

    case '-':
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        printf("Result: %.2f\n", a-b);
        break;

    case '*':
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        printf("Result: %.2f\n", a*b);
        break;

    case '/':
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        if(b != 0) {
            printf("Result: %.2f\n", a/b);
        } else {
            printf("Error: Division by zero!\n");
        }
        break;

    case '^':
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        result = pow(a, b);
        printf("Result: %.2f\n", result);
        break;

    case 's': // sqrt
        printf("Enter the first number(in points): ");
        scanf("%f", &a);
        printf("Enter the second number(in points): ");
        scanf("%f", &b);
        printf("Which number? (a or b): ");
        scanf(" %c", &choice);
        if(choice == 'a')
            printf("Sqrt of a: %.2f\n", sqrt(a));
        else if(choice == 'b')
            printf("Sqrt of b: %.2f\n", sqrt(b));
        else
            printf("Invalid choice!\n");
        break;

    case 'f':
        int p=1;
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n<0){
            printf("The number doesn't exists\n");
        } else if(n==1){
            printf("1\n");
        } else{
            for(i=1; i<=n; i++){
                p=p*i;
            }
            printf("%d\n", p);
        }
        break;

    case 'r':
        printf("a: Circle\nb. Triangle\nc. Rectangle\nd.Square\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        if(choice=='a'){
            printf("Enter the radius (in points): ");
            scanf("%f", &c);
            result= pi*c*c;
            printf("The area of circle is: %.2f\n", result);
        } 
        else if(choice=='b'){
            printf("Enter the breadth and height of the triangle (in points): ");
            scanf("%f %f", &a, &b);
            result=a*b*(0.5);
            printf("The area of the triangle is: %.2f\n", result);
        } 
        else if(choice=='c'){
            printf("Enter the lenght and breadth of the rectangle (in points): ");
            scanf("%f %f", &a, &b);
            result= a*b;
            printf("The are of the rectangle is: %.2f\n", result);
        } 
        else if(choice=='d'){
            printf("Enter the side of the square(in points): ");
            scanf("%f", &a);
            result= a*a;
            printf("The area of the square is: %.2f\n", result);
        }
        else{
            printf("Invalide input\n");
        }
        break;

    case 'l':
        int z=0;
        printf("Enter a number: ");
        scanf("%d", &n);

        for(i=2; i<=n-1; i++){
            if(n%i==0){
                z=1;
            }
        }
        if(z==1){
            printf("It's a Composite number\n");
        }
        else{
            printf("Prime number\n");
        }
        break;
        

    default:
        printf("INVALID INPUT\n");
    }
    printf("Do you want to do more calculations(Y/N): ");
    scanf(" %c", &q);
}   
    while(q=='Y' || q=='y');

    return 0;
}

