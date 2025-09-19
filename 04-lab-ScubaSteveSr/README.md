## Laboratory Assignment #4: More Linux commands, math involving integers and selection control structures

**Points**: 100 pts  
*Purpose: gain some familiarity with linux commands, integer division, and control structures.*

---
## Step 1: Linux Commands

The purpose of this section of the lab is to practice with the following commands
- ls
- cp
- cd
- cat
- mv
- man
  
1. You already have used the `ls` command in the previous labs. To get more details on this command, type `man ls` in the terminal. When you are done with the reading, enter `q` to quit.
2. Type `ls lab4` at the command line
3. Type `ls -l lab4` at the command line. Note that this command adds a `-l` before the specified directory. You should see (among other things)
```
drwxr-xr-x 2 nabukama faculty 512 Jan 18 20:13 dir6
-rw-r--r-- 1 nabukama faculty 32 Jan 18 18:15 dir8
. . . . . .
```
The first character on the line for dir6 indicates that dir6 is a directory and the first
character on the line dir8 (-) indicates that dir8 is a regular file. The next nine
characters represent three categories – owner(you), group and world. Each
category represents r for read, w for write and x for execute permissions of a file.
For example, look at dir8, the owner has read and write privileges, but the group and
you have only read privileges

4. **Answer questions 1 - 4 on the answer sheet**
5. You can display the contents of a file by typing the following command
	`cat lab4/dir8`
6. **Answer question 5 & 6 on the answer sheet**
7. **First type pwd to make sure that you are in the lab4 directory**
8. to copy the files from `dir1` into your directory, type
	`cp ./dir1/* .`
	note that the dot at the end signifies the destination as the current directory.
9. **Answer question 7 and 8 on the answer sheet**
10. Now type `cd ../..` and type `pwd`
11. **Answer question 9 on the answer sheet**

## Step 2: Arithmetic Operations with Integers

First, make sure you are in the `lab4` directory, and then copy `prog1.cc` from `dir2` to the current directory. Compile and run the program, then **Answer step 3 questions on the answer document.**

## Step 3: Wage Plan
A bicycle salesperson is offered a choice of wage plan: 

a: $5.50 per hour for 40 hours plus a 10% commission on sales 
b:  a straight 15% commission on sales with no other salary. 

Write a program that will take as input the sales persons expected weekly sales and will output the expected wages paid under each plan as well as announcing the best-paying plan. Implement this program (call it prog2.cc) using if-else statements

Declare rate per hour (5.50), the two commissions (10% and 15%) as named constants in your program. Do not forget to format the output to two decimal places.
A sample dialogue from this program:

```
./a.out

Enter the weekly sales amount > 4395.00

Amount of sales $4395.00
Plan 1 pays $659.50
Plan 2 pays $659.25
Plan 1 is better

./a.out
Enter the weekly sales amount > 4500.00

Amount of sales $4500.00
Plan 1 pays $670.00
Plan 2 pays $675.00
Plan 2 is better
```
Begin your program with the standard comment “box.” The program should be thoroughly documented and follow the style guidelines discussed in class.

**Scoring for step 4 (20 pts)**
- 8 points:  correct calculations and if-else statement
- 2 points: comments (name, date, etc and the introduction to the program)
- 2 points:  named constants in uppercase.
- 2 points:  write out all items requested, labeling each item.
- 2 points:  meaningful variable names and document the variables
- 2 points:  appearance of output (spacing, format to 2 decimal places)
- 1 points:  prompts to user.
- 1 point:  style (indenting)
