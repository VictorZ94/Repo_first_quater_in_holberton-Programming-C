### Bit manipulation - bitwise Operators 

#### & - Binary AND Operator copies a bit to the result if it exists in both operands.

#### | - Binary OR Operator copies a bit if it exists in either operand.

#### ^ - Binary XOR Operator copies the bit if it is set in one operand but not both.

#### ~ - Binary One's Complement Operator is unary and has the effect of 'flipping' bits.

#### << - Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.

#### >> - Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.

### 0. 0 

Write a function that converts a binary number to an unsigned int.

- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if
        - there is one or more chars in the string b that is not 0 or 1
        - b is NULL