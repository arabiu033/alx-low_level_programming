# 0x00 C - Hello, World :pencil2:

> It is a presumed that if you are reading this, you have finished the alx resources provided for this particular topic.
> 
> Additionally, it's presumed that you've written down everything you've learned about this subject.
> 
> If the above prsumptions are not true. `please do not proceed`


## Learning Objectives :bookmark_tabs:

* How to write a compilable c file
* Different stages of achieveing excutable c file
      - Preprocessing
      - compilation
      - assembly
      - linking      
* The main fuction and why its importance
* what are headers
* How to find the right header to include in your source code when using a standard library function



## Tasks :heavy_check_mark:
> You are to come up with the answers and solutions for the following tasks
> 
> In case you are stuck, explore this options
> * Your Note 📓
> * Google 🔍
> * Youtube ⏯️
> * Me 👨‍
> * `You are not allow to seek help from github or another person.`

## Theorotical section 📖
----------------------------
1 - What extension is required to declare a file a c file ?

`[Write your explanation inside here]`

------------------------------------------
2 - Explain what are headers file are and what is their use ?

`[Write your explanation inside here]`

----------------------------------------
3 - Assuming I want to use the fuction `malloc`. But i dont know which header contains this function, without using google how will i find the header that this function belongs to and include it. (Hint: man)

`[Write your explanation inside here]`

--------------------------------------------
4 - Strictly from your note or brain, explain the following concepts base on your understanding
- Preprocessor
- Comipilation
- assembly
- linking

`[Write your explanation inside here]`

----------------------------------------------
5 - Why must every c program have a `main function`. also why there must be only onr `main function per program`

`[Write your explanation inside here]`

---------------------------------------------
6 - What are comments ? Provide the two possible ways to insert a comment in C

`[Write your explanation inside here]`

-----------------------------------------------
## Practical Section 🥼

---------------------------
1 - Create a c file using the code below.

```bash
<#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
```
`file name: 0-main.c`

----------------------------
2 - Using the above c file created, produce a preprocessor file of it name 0-pre_proc

`[Enter the full command use to produce the preprocessor file]`

-------------------------------
3 - Using the 0-main.c file, produce a compiled file having the same name as the c file but with the extention .o

`[Enter the full command use to produce the compiled file]`

-------------------------------

4 - Using the 0-main.c file, produce an excutable file. The executable file should be bering your names (e.g John)

`[Enter the full command use to produce the executable file]`

-------------------------------

5 - Make some changes to the following code below

```bash
#include </* header is required here for the strlen use in the code */>

/**
 * main- return the length of a string
 *
 *
 * Return: 0 success
 */
int main(void)
{
	int len;
        char *s = "strlen function from a standard library"

	len = strlen(s);
	return (0);
}
```
Using the answer provide in question 3 from the theoretical section. use it as guide to find the desired header to be use in this file. (google or asking another person is not permitted here)

----------------------------------------

6 - (# Advanced) Edit the 0-main.c file created above. 
* prints `Hi it's "Tracy" and "Kenny" Revising C-Lang`.
* prints extra line after
* Use the printf function from standard library

`executable file name: introduction

