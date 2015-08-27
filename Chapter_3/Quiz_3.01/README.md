1) You know from everyday mathematics that expressions inside of parenthesis get evaluated first. For example, in the expression (2 + 3) * 4, the (2 + 3) part is evaluated first.

For this exercise, you are given a set of expressions that have no parenthesis. Using the operator precedence and associativity rules in the table above, add parentheses to each expression to make it clear how the compiler will evaluate the expression.

Hint: Use the pattern column in the table above to determine whether the operator is unary (has one operand) or binary (has two operands). Review section 1.5 -- A first look at operators if you need a refresher on what unary and binary operators are.

>Sample problem: x = 2 + 3 % 4  
Binary operator % has higher precedence than operator + or operator =, so it gets evaluated first:

>x = 2 + (3 % 4)

>Binary operator + has a higher precedence than operator =, so it gets evaluated next:

>Final answer: x = (2 + (3 % 4))

>We now no longer need the table above to understand how this expression will evaluate.

a) x = 3 + 4 + 5;  
b) x = y = z;  
c) z *= ++y + 5;  
d) a || b && c || d;  
