# Mini Shell in C

> A simple Unix-like shell built in C using low-level Linux system calls.

![Language](https://img.shields.io/badge/language-C-blue)
![Platform](https://img.shields.io/badge/platform-Linux-green)
![Build](https://img.shields.io/badge/build-Makefile-orange)
![Status](https://img.shields.io/badge/status-In_Progress-yellow)

---

## Demo

![Mini Shell Demo](/ss/mini_shell2.png)

---

# Features

- Custom shell loop
- Dynamic input reading
- Command tokenization
- Builtin shell commands
- Process creation using `fork()`
- Program execution using `execvp()`
- Process synchronization using `waitpid()`
- Modular project structure
- Makefile build system

---

# Project Structure

```text
mini-shell/
├── bin/
│   └── lsh
├── include/
│   └── shell.h
├── obj/
│   ├── builtin.o
│   ├── execute.o
│   ├── input.o
│   ├── parser.o
│   └── utils.o
├── src/
│   ├── builtin.c
│   ├── execute.c
│   ├── input.c
│   ├── main.c
│   ├── parser.c
│   ├── shell.c
│   └── utils.c
├── screenshots/
│   └── demo.png
├── Makefile
├── README.md
└── .gitignore
```

---

# How It Works

```text
User Input
    ↓
Read Command
    ↓
Tokenize Input
    ↓
Check Builtins
    ↓
fork()
    ↓
execvp()
    ↓
waitpid()
```

---

# Builtin Commands

```bash
cd
help
exit
```

---

# Example Usage

```bash
$ ./bin/lsh

> help

Stephen Brennan's LSH
Type program names and arguments, and hit enter.

The following are built in:
  cd
  help
  exit

> pwd
/home/jayesh/mini-shell

> ls
src include bin obj README.md

> echo hello
hello
```

---

# Build Instructions

## Clone Repository

```bash
git clone https://github.com/YOUR_USERNAME/mini-shell.git
cd mini-shell
```

## Build Project

```bash
make
```

## Run Shell

```bash
./bin/lsh
```

## Clean Build Files

```bash
make clean
```

---

# System Calls Used

| Function | Purpose |
|---|---|
| `fork()` | Create child process |
| `execvp()` | Execute external command |
| `waitpid()` | Wait for child process |
| `chdir()` | Change current directory |
| `malloc()` | Dynamic memory allocation |
| `realloc()` | Resize allocated memory |
| `free()` | Free memory |

---

# Future Improvements

- Pipes (`|`)
- I/O Redirection (`>`, `<`)
- Background processes (`&`)
- Command history
- Autocomplete
- Signal handling
- Environment variables

---

# Learning Goals

This project was built to learn:

- Linux system programming
- Process management
- Shell architecture
- Dynamic memory allocation
- Modular C project structure
- Low-level Unix APIs

---

# Author

Jayesh Sharma

Computer Engineering Student