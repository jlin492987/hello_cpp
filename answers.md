Question 1: If I edit hello.cpp but run ./hello without recompiling, hello.cpp will run as if it wasn't changed, because the object file that corresponds to hello.cpp will not be updated until it is recompiled.
/usr/bin/aarch64-linux-gnu-ld.bfd: main.o: in function `main':
main.cpp:(.text+0x2c): undefined reference to `distance(double, double, double, double)'
collect2: error: ld returned 1 exit status
main.cpp: In function ‘int main()’:
main.cpp:8:17: error: expected ‘;’ before ‘}’ token
    8 |         return 0
      |                 ^
      |                 ;
    9 | }
      | ~
