  #include <stdio.h>
  int main()  {
        int num1, num2, gcd;

        /* get the input values from the user */
        printf("Enter your first number:");
        scanf("%d", &num1);
        printf("Enter your second number:");
        scanf("%d", &num2);

        /* take smallest value to manipulate gcd value */
        if (num1 > num2) {
                gcd = num2;
        } else {
                gcd = num1;
        }

        /* gcd manipulation */
        while (gcd > 1) {
                if (num1 % gcd == 0 && num2 % gcd == 0) {
                        break;
                }
                gcd--;
        }

        /* print the outputs */
        printf("GCD between %d and %d is %d\n", num1, num2, gcd);
        return 0;
  }
