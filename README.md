# ShellForge

ShellForge is a Unix-like shell developed as part of the Operating Systems and Systems Programming Project-Based Learning course.

## Features

### Week 1
- Interactive REPL loop
- Makefile-based build
- Git repository
- Linux development environment

### Week 2
- Dynamic input buffer
- malloc() and realloc()

### Week 3
- Command parsing using strtok()

### Week 4
- Process creation using fork()
- Command execution using execvp()
- Parent-child synchronization using wait()

### Week 5
- Built-in commands: cd, pwd, help, clear, exit, env
- Environment variable support

### Week 6
- Signal handling
- SIGINT
- SIGCHLD

### Week 7
- Anonymous pipes
- pipe()
- dup2()
- Two-command pipelines
- Inter-process communication (IPC)

### Week 8
- Memory debugging with Valgrind
- GDB debugging
- AddressSanitizer (ASan)
- Memory leak detection
- Defensive programming

## Build

make

## Run

make run

## Clean

make clean

## AddressSanitizer

make asan

## Valgrind

valgrind --leak-check=full ./bin/shellforge
