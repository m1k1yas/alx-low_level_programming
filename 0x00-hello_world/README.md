# C - Hello, World

0. **preprocssor** 
Runs a C file through the preprocessor and save the result into another file
```bash
gcc main.c -E -o c
```
1. **compiler**
Compiles a C file but does not link
```bash
gcc main.c -c
```
2. **assembler**
Generates the assembly code of a C code and save it in an output file
```bash
gcc main.c -S
```
3. **name**
compiles a C file and creates an executable
```bash
gcc main.c
```
4. **puts.c**
Write a C program that prints using the function puts
```c
int main(void)
{
char string[] = "..."
puts(string)
}
```

