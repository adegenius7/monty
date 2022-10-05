# Monty Language Interpreter
## About
- This is an introductory project that explains:
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables
- How to work with git submodules

## Requirements
- Ubuntu 14.04 LTS
- GCC version 4.8.4 with flags: -Wall -Werror -Wextra and -pedantic

## Installation
1. Clone the repository
`https://github.com/ibeckermayer/monty.git`

2. Compile the program
`gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

3. Run the program as follows:
- Usage: `monty <file.m>`
- Ex: `./monty ./bytecodes/00.m`
The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
##EXAMPLE```
vagrant@vagrant-ubuntu-trusty-64:~$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
vagrant@vagrant-ubuntu-trusty-64:~$ ./monty ./bytecodes/000.m
3
2
1
0
6
5
4
3
2
1
0
vagrant@vagrant-ubuntu-trusty-64:~$
```
