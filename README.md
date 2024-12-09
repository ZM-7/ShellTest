# Test of a Custom Shell in C

Welcome! This is a simple command-line interpreter built in C as a learning project. The goal is to understand how operating systems handle processes, system calls, and user interactions.  

I am looking to explore how shells like Bash or Zsh work under the hood. It demonstrates fundamental concepts such as forking, process execution, and command parsing.

---

## Features
- **Command Execution**: Runs standard Linux commands like `ls`, `pwd`, etc.
- **Custom Prompt**: A personalized shell prompt (`custom-shell>`).
- **Exit Command**: Use `exit` to gracefully terminate the shell.
- **Basic Input Parsing**: Splits user input into commands and arguments.

---

## How It Works
1. The shell displays a prompt and waits for user input.
2. It parses the input to extract the command and its arguments.
3. The shell uses `fork()` to create a new process and `execvp()` to execute the command.
4. The parent process waits for the child process to complete using `waitpid()`.

---

## Learning Objectives
By working on this project, you will:
- Gain hands-on experience with **fork**, **exec**, and **wait** system calls.
- Understand how user input is tokenized and parsed in C.
- Learn to manage parent and child process communication.
- Explore basic error handling in system-level programming.

---

## Getting Started

### Prerequisites
- A Linux-like terminal 
- GCC

### Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/ZM-7/ShellTest.git
   cd custom-shell
   ```
2. Compile the code:
   ```bash
   gcc custom_shell.c -o custom_shell
   ```
3. Run the shell:
   ```bash
   ./custom_shell
   ```

---

## Example Usage
```bash
custom-shell> ls
file1.c  file2.txt  custom_shell
custom-shell> pwd
/home/user/projects
custom-shell> exit
Exiting shell...
```

---

## Future Improvements
- **Built-in Commands**: I would like to Implement `cd`, `help`, or other built-in functionality.
- **I/O Redirection**: Add support for `>` and `<` for file operations.
- **Pipelines**: Enable commands like `ls | grep file`.
- **Signal Handling**: Gracefully handle `Ctrl+C` or `Ctrl+Z`.
- **Command History**: Add a history feature for easier command recall.

---

## License
This project is licensed under the MIT License. Feel free to use, modify, and share it.

---
