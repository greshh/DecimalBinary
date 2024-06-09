# Decimal Binary
***Start:** July 26<sup>th</sup> 2022, **Finish:** August 19<sup>th</sup> 2022*

For a first-year course: Computer Science & Programming

## Scenario
This program converts binary numbers to decimal and decimal numbers to binary. The program prompts the user to enter a number as a string. If the number is binary, it converts it to decimal. If the number is decimal, it converts it to binary. If the number is not valid or doesn't satisfy the conditions below, then an appropriate error message is displayed.

**Conditions:**
- Decimal numbers must be in the range 0 to 255.
- Binary numbers must not be more than 9 binary digits.
- A binary number must _always_ be entered with a leading zero.
- A decimal number must _never_ be entered with a leading zero.
- Decimal numbers must never be displayed with leading zeros.
- Binary numbers must always be displayed as 8 bits with a space after 4 bits.
- Library functions are not used in this program.

## Example inputs:
```
Enter a number: 8
Converting decimal to binary. The result is 0000 1000
```
```
Enter a number: 010
Converting binary to decimal. The result is 2
```
```
Enter a number: 10
Converting decimal to binary. The result is 0000 1010
```
```
Enter a number: hello
This is not a valid number.
```
```
Enter a number: 027
This is not a valid binary number.
```
```
Enter a number: 256
This decimal number is outside the range 0 to 255.
```
```
Enter a number: 00101001010
This binary number has more than 9 binary digits.
```

## What I learnt:
- The process in converting binary to decimal, and decimal to binary.
- Function declaration and definition.
- Error handling.
