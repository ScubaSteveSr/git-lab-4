**Lab 4 Answer Document (80 points)**
Name: Blake Wood
PID:
1. (5 pts.) What does the command `ls` stand for, and what does it do? (hint: use the `man` command) The 'ls' command stands for list directory contents and it lists information about the FILEs
   
   
2. (5 pts.) List the names of the **subdirectories** in the directory `/home/nabukama/2400/lab4`  nabukama 2400 lab4
   
   
3. (10 pts.) What is displayed when you type `ls -l /home/nabukama/2400/lab4`? Include at least 3 full entries and explain what they mean. 
drwxr-xr-x 2 bw059124@ohio.edu Domain Users@ohio.edu 4096 Sep 19 16:12 dir4
drwxr-xr-x 2 bw059124@ohio.edu Domain Users@ohio.edu 4096 Sep 19 16:12 dir5
-rw-r--r-- 1 bw059124@ohio.edu Domain Users@ohio.edu   32 Sep 19 16:12 dir8

The first one and the second one are directories because of their first character. The thrid one is a regular file. The next 3 groups are the owner, group and world.
   
   
4. (5 pts.) Give the size of `dir5` by using the command `ls -lh /home/nabukama/2400/lab4/dir5`. Note that the `h` stands for displaying the size in human readable form (`K` for Kilobytes, `M` for Megabytes, etc..) Total is 64K
   
   
5. (5 pts.) What is displayed when you type `cat /home/nabukama/2400/lab4/dir2/info3`?
   Important information about labs.

lab 107 - open Monday to Friday from 8:00 am to 10:00 pm
lab 307 - open 24/7

6. (5 pts.) What is displayed when you type `cat /home/nabukama/2400/info2`. Why did this happen? cat: info2: No such file or directory

   
   
7. (5 pts.) Give the names of the files in the `dir1` directory.
   more_test and yet_another_test
   
8. (5 pts.) Give the content of the file `more_test` in `dir3`
   If you would like additional programs to write,
    practice problems at the end of each chapter.
   
9. (5 pts.) What is displayed when you type `pwd`? What does the command stand for?
   /home/bw059124/2400

   
10. (5 pts.) What are some good values to use to test this program?
    a random character, negative values, large numbers

11. (5 pts) What happens if you type in 42 when asked for a number?
You have the answer alread!
You've got nothing!
Try again.
Enter a number, and I'll compute the answer

12. (5 pts) Correct the code as the programmer intended.


13. (5 pts) Modify the program to allow you to exit the loop, and the program if you type in your own secret number (12345).
