uilt-in String Support (C-style Strings)

Let’s start off with a review of built-in string support, henceforth referred to as “C-style strings”.

Neither C or C++ have a default built-in string type. C-strings are simply implemented as a char array which is terminated by a null character (aka 0). This last part of the definition is important: all C-strings are char arrays, but not all char arrays are c-strings.

C-strings of this form are called “string literals“:

const char * str = "This is a string literal. See the double quotes?"
String literals are indicated by using the double quote (") and are stored as a constant (const) C-string. The null character is automatically appended at the end for your convenience.

The standard library contains functions for processing C-strings, such as strlen, strcpy, and strcat. These functions are defined in the C header string.h and in the C++ header cstring. These standard C-string functions require the strings to be terminated with a null character to function correctly.

Disadvantages of C-strings

C arrays do not track their own size. You must keep up with size on your own or rely on the linear-time strlen function to determine the size of each string during runtime. Since C has no concept of boundary protection, the use of the null character is of paramount importance: the C library functions require it, or else they operate past the bounds of the array

Working with C-strings is not intuitive. Functions are required to compare strings, and the output of the strcmp functions is not intuitive either. For functions like strcpy and strcat, the programmer is required to remember the correct argument order for each call. Inverting arguments can have a non-obvious yet negative effect.

Many C-strings are used as fixed-size arrays. This is true for literals as well as arrays that are declared in the form char str[32]. For dynamically sized strings, programmers must worry about manually allocating, resizing, and copying strings.

The concept of C-string size/length is not intuitive and commonly results in off-by-one bugs. The null character that marks the end of a C-string requires a byte of storage in the char array. This means that a string of length 24 needs to be stored in a 25-byte char array. However, the strlen function returns the length of the string without the null character. This simple fact has tripped up many programmers (including myself) when copying around memory. Eventually, you end up with a non-null-terminated string, causing the string library functions to operate out-of-bounds.

What If We Could Fix Those Disadvantages?

What if we could fix those disadvantages? What would our ideal string use-case look like? Here are some ideas:

Flexible storage capacity
Constant-time string length retrieval (rather than a linear-time functional check)
No need to worry about manual memory management or resizing strings
Boundary issues are handled for me, with or without a null character.
Intuitive assignment using the = operator rather than strcpy
Intuitive comparison using the == operator rather than strcmp
Intuitive interfaces for other operations such as concatenation (+ operator is nice!), tokenization
std::string

Luckily, the C++ std::string class scratches most of these itches for us. Fundamentally, you can consider std::string as a container for handling char arrays, similar to std::vector<char> with some specialized function additions.

The std::string class manages the underlying storage for you, storing your strings in a contiguous manner. You can get access to this underlying buffer using the c_str() member function, which will return a pointer to null-terminated char array. This allows std::string to interoperate with C-string APIs.