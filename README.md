# Assignment-of-OS

1. Write a multithreaded program that calculates various statistical values for a list of numbers. This program will be passed a series of numbers on the command line and will then create three separate worker threads. One thread will determine the average of the numbers, the second will determine the maximum value, and the third will determine the minimum value. For example, suppose your program is passed the integers  90 81 78 95 79 72 85 The program will report The average value is 82 The minimum value is 72 The maximum value is 95  The variables representing the average, minimum, and maximum values will be stored globally. The worker threads will set these values, and the parent thread will output the values once the workers have exited. 
 
 
 
2. Design a file-copying program named filecopy using ordinary pipes. This program will be passed two parameters: the name of the file to be copied and the name of the copied file. The program will then create an ordinary pipe and write the contents of the file to be copied to the pipe. The child process will read this file from the pipe and write it to the destination file. For example, if we invoke the program as follows:  filecopy input.txt copy.txt  The file input.txt will be written to the pipe. The child process will read the contents of this file and write it to the destination file copy.txt.
