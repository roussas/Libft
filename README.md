# Libft



#### Description



Libft is a custom C library developed as part of the 42 curriculum.



The goal of this project is to recreate a collection of commonly used functions from the C standard library and to implement additional functions for working with strings, memory, characters, numbers, file descriptors, and linked lists.



Building this library provides a deeper understanding of C programming fundamentals, including:



\* Memory allocation and management

\* Pointers and pointer arithmetic

\* Strings and character manipulation

\* Arrays and memory buffers

\* Type casting

\* File descriptors

\* Linked lists

\* Dynamic memory management

\* Static libraries

\* Makefiles and compilation

\* Error handling and edge cases



The resulting `libft.a` static library can be reused in future 42 projects.





#### Library Contents





##### Character checks and conversions



The library contains functions for checking and converting characters:



* &#x20;ft\_isalpha — checks whether a character is alphabetic.
* &#x20;ft\_isdigit — checks whether a character is a digit.
* &#x20;ft\_isalnum — checks whether a character is alphanumeric.
* &#x20;ft\_isascii — checks whether a character belongs to the ASCII character set.
* &#x20;ft\_isprint — checks whether a character is printable.
* &#x20;ft\_toupper — converts a lowercase character to uppercase.
* &#x20;ft\_tolower — converts an uppercase character to lowercase.





##### String functions



The library provides functions for common string operations:



* &#x20;ft\_strlen — calculates the length of a string.
* &#x20;ft\_strchr — locates the first occurrence of a character.
* &#x20;ft\_strrchr — locates the last occurrence of a character.
* &#x20;ft\_strncmp — compares two strings up to a specified number of characters.
* &#x20;ft\_strnstr — searches for a substring within a string, limited to a specified length.
* &#x20;ft\_strdup — duplicates a string.
* &#x20;ft\_strlcpy — copies a string into a destination buffer with size protection.
* &#x20;ft\_strlcat — concatenates strings with size protection.
* &#x20;ft\_strjoin — concatenates two strings into a newly allocated string.
* &#x20;ft\_strtrim — removes specified characters from the beginning and end of a string.
* &#x20;ft\_substr — creates a substring from a string.
* &#x20;ft\_split — splits a string into an array of strings using a delimiter.
* &#x20;ft\_strmapi — creates a new string by applying a function to each character.
* &#x20;ft\_striteri — applies a function to each character of a string.





##### Memory functions



The library implements several functions for manipulating memory:



* &#x20;ft\_memset — fills a block of memory with a specified byte.
* &#x20;ft\_bzero — sets a block of memory to zero.
* &#x20;ft\_memcpy — copies memory from one location to another.
* &#x20;ft\_memmove — copies memory while handling overlapping regions.
* &#x20;ft\_memchr — searches memory for a byte.
* &#x20;ft\_memcmp — compares two memory areas.
* &#x20;ft\_calloc — allocates and zero-initializes memory.





##### Conversion



* &#x20;ft\_atoi — converts a string representation of an integer into an integer.
* &#x20;ft\_itoa — converts an integer into a newly allocated string.





##### File descriptor output



The following functions write data to a specified file descriptor:



* &#x20;ft\_putchar\_fd — writes a character to specified file descriptor.
* &#x20;ft\_putstr\_fd — writes a string to a specified file descriptor.
* &#x20;ft\_putendl\_fd — write a string followed by a new line to a specified file descriptor.
* &#x20;ft\_putnbr\_fd — write a number/integer to a specified file descriptor.





##### **Linked lists**



This part of the project implements a linked list using the `t_list` structure.

typedef struct s\_list

{

&#x09;void \*content;

&#x09;struct s\_list \*next;

} t\_list ;



The linked-list functions are:



* &#x20;ft\_lstnew — creates a new list node.
* &#x20;ft\_lstadd\_front — adds a node to the beginning of a list.
* &#x20;ft\_lstadd\_back — adds a node to the end of a list.
* &#x20;ft\_lstsize — counts the number of nodes in a list.
* &#x20;ft\_lstlast — returns the last node.
* &#x20;ft\_lstdelone — deletes one node.
* &#x20;ft\_lstclear — deletes an entire list.
* &#x20;ft\_lstiter — applies a function to every node.
* &#x20;ft\_lstmap — creates a new list by applying a function to every node.







#### **Instructions**







##### **Compilation**



The project includes a `Makefile` that creates the static library `libft.a`.



To compile the library:




`make`




To remove object files:



`make clean`




To remove object files and the compiled library:



`make fclean`




To completely rebuild the library:



`make re`




The Makefile compiles the source files using:



-Wall -Wextra -Werror








##### **Using Libft in another project**



Include the library header:



\#include "libft.h"





Compile your project together with the library:





cc your\_program.c -L. -lft





Alternatively, the library can be linked directly:





cc your\_program.c libft.a






#### **Resources**







##### Documentation and references



* &#x20;`man` pages for the corresponding C library functions.
* &#x20;C language documentation and reference material.
* &#x20;The 42 Libft subject and project requirements.
* &#x20;The C standard library documentation for functions recreated in this project.
* &#x20;The GNU C Library documentation for additional reference.





##### **AI usage**



AI was used as a further explanation and edge cases tool during the development of this project.



It was used for:



* &#x20;Identifying edge cases and potential bugs.
* &#x20;Reviewing compilation issues.
* &#x20;Explaining C concepts when needed, particularly pointers arithmatics.





**All code was written by kpagkalo.** 





##### **Technical Choices**





The library is written entirely in C.



The project uses:



* &#x20;A static library (libft.a)
* &#x20;A header file (libft.h) containing function prototypes and the linked-list structure .
* &#x20;A Makefile for compilation and library creation .
* &#x20;Dynamic memory allocation where required .
* &#x20;Standard C types such as `size_t` .
* &#x20;Linked lists .



The implementation aims to reproduce the behavior of the required standard-library functions while following the constraints and coding standards of the 42 curriculum.





#### **Project Structure**




libft/

├── Makefile

├── README.md

├── libft.h

├── ft\_atoi.c

├── ft\_bzero.c

├── ft\_calloc.c

├── ft\_isalnum.c

├── ft\_isalpha.c

├── ft\_isascii.c

├── ft\_isdigit.c

├── ft\_isprint.c

├── ft\_itoa.c

├── ft\_lstadd\_back.c

├── ft\_lstadd\_front.c


├── ft\_lstclear.c

├── ft\_lstdelone.c

├── ft\_lstiter.c

├── ft\_lstlast.c

├── ft\_lstmap.c

├── ft\_lstnew.c

├── ft\_lstsize.c

├── ft\_memchr.c

├── ft\_memcmp.c

├── ft\_memcpy.c

├── ft\_memmove.c

├── ft\_memset.c

├── ft\_putchar\_fd.c

├── ft\_putendl\_fd.c

├── ft\_putnbr\_fd.c

├── ft\_putstr\_fd.c


├── ft\_split.c

├── ft\_strchr.c

├── ft\_strdup.c

├── ft\_striteri.c

├── ft\_strjoin.c

├── ft\_strlcat.c

├── ft\_strlcpy.c

├── ft\_strlen.c

├── ft\_strmapi.c

├── ft\_strncmp.c

├── ft\_strnstr.c

├── ft\_strrchr.c

├── ft\_strtrim.c

├── ft\_substr.c

├── ft\_tolower.c

└── ft\_toupper.c

