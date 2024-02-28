// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=1,b=2,c=3,d=6;
//     d=a++ + --a + --c + c-- + d++;
//     cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
// }
#include <iostream>
using namespace std;
int main()
{
    int a,b=2,c=3,d=6;
    cin>>a;
    d=a++ ||--a && --c ^ c-- != d++;
        // d=a++ + --a + --c - c-- + d++;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
}
// operator precedence
/*Precedence	Operator	Description	Associativity
1	::	Scope resolution	Left-to-right →
2	a++   a--	Suffix/postfix increment and decrement
type()   type{}	Functional cast
a()	Function call
a[]	Subscript
.   ->	Member access
3	++a   --a	Prefix increment and decrement	Right-to-left ←
+a   -a	Unary plus and minus
!   ~	Logical NOT and bitwise NOT
(type)	C-style cast
*a	Indirection (dereference)
&a	Address-of
sizeof	Size-of[note 1]
co_await	await-expression (C++20)
new   new[]	Dynamic memory allocation
delete   delete[]	Dynamic memory deallocation
4	.*   ->*	Pointer-to-member	Left-to-right →
5	a*b   a/b   a%b	Multiplication, division, and remainder
6	a+b   a-b	Addition and subtraction
7	<<   >>	Bitwise left shift and right shift
8	<=>	Three-way comparison operator (since C++20)
9	<   <=   >   >=	For relational operators < and ≤ and > and ≥ respectively
10	==   !=	For equality operators = and ≠ respectively
11	a&b	Bitwise AND
12	^	Bitwise XOR (exclusive or)
13	|	Bitwise OR (inclusive or)
14	&&	Logical AND
15	||	Logical OR
16	a?b:c	Ternary conditional[note 2]	Right-to-left ←
throw	throw operator
co_yield	yield-expression (C++20)
=	Direct assignment (provided by default for C++ classes)
+=   -=	Compound assignment by sum and difference
*=   /=   %=	Compound assignment by product, quotient, and remainder
<<=   >>=	Compound assignment by bitwise left shift and right shift
&=   ^=   |=	Compound assignment by bitwise AND, XOR, and OR
17	,	Comma	Left-to-right →*/

