#uname -a tells you the OS that the system is running
#cat /proc/cpuinfo to view the CPUs in the system
#top

#List currently running processes: ps -ef or ps -aux
#-e: to display all processes -f: to display full format listing

#List processes based upn the UID and commands: ps -u (uid), ps -C
#ps -u (piachouaifaty)
#List all threads for a particular process: ps -L (more on threads later).

#The Unix command kill can be used to send a signal to a process. A signal is a mechanism provided by OS for processes to communicate with each other. For now, you can just remember the signal number 9 is for terminating a process:
#kill -9 30453

#ls -l > output_of_ls ## this saves the output of ls -l to the file

#$ echo "10" > input_fibo ## instead of display the message in terminal, send it
## to the file

#$./fibo < input_fibo # run a.out, but reads input from user_input file

#$g++ mylab.cpp > compile_result ##

#$g++ mylab.cpp >& compile_error ## this will redirect standard error output to the file

#$g++ mylab.cpp > compile_result 2>&1
# redirect output to compile_result, and error output to same place as output

#Command pipeline (|): redirect the first command's output as standard input to the second command:
#$ ps -U zhang -f | grep bash # search for processes running bash
#$ g++ mylab.cpp 2>&1 | head -10 ## To see the first line of (standard or error) output of g++


#$bash testScript ## read commands from testScript, not standard input (keyboard anymore).
## Note that if testScript is made executable, and has the following ## as first line:
#!/bin/bash
## Then we can simply say ./testScript, as the system will know to use bash to interpret it...

g++ main.cpp -o main.out
./main.out

