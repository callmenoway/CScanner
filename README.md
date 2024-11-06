# CScanner

CScanner is a simple yet efficient port scanner written in C. This tool allows users to check if specific ports are open on a target IP address, which is useful for network security audits and troubleshooting. 

## Features
- Fast scanning for open ports
- Lightweight and minimal dependencies
- Easy-to-use command-line interface

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [License](#license)

---

## Installation

### Prerequisites
- **C compiler**: You’ll need a C compiler (e.g., GCC or Clang) installed on your system.
- **Make** (optional but recommended): To streamline the build process, especially for larger projects.

### Compiling CScanner

1. **Clone the Repository**:
```bash
git clone https://github.com/yourusername/CScanner.git
cd CScanner
```
### Compile: Use the following commands to compile the program.

With GCC:

```bash
gcc -o main main.c
```
With Clang (optional):

```bash
clang -o main main.c
```
### Run the Program
After compilation, you should have an executable named ```main.exe``` (or simply ```main``` on Unix-based systems).

## Usage
To run the CScanner, use the following syntax:

```bash
./main <ip> <port>
```
- <ip>: The IP address of the target you want to scan.
- <port>: The specific port number you want to check.
If the port is open, CScanner will output a success message; otherwise, it will indicate the port is closed or unreachable.

### Examples
To scan port 80 on 192.168.1.1:

```bash
./main 192.168.1.1 80
```
To scan a different port, simply replace the port number:

```bash
./main 192.168.1.1 443
```
## Notes
Ensure you have the necessary permissions to scan ports on the network you are analyzing.
Running this tool on public networks may require authorization to avoid breaching security policies.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

Happy scanning!

```vbnet
Let me know if you'd like any additional customization.
```
