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

Question 2: The second error came from the compiler and the first error came from the linker. I can tell because the second error is an issue with the syntax, which is an error the compiler would catch. The first error arose from not being able to find the definition of the distance function, which is an error the linker would find.

Question 3: In the linker error step, main.cpp compiled fine even though linking failed because the .h file basically makes a "promise" that the function exists, so the compiler doesn't check it. However, the linker will check to see whether it actually exists.

Question 4: With -O0, there were 8 lines of assembly. With -O2, there were only 4 lines of assembly. We would want -O2 on the robot so the code can run faster.

Question 5: 

This line compiles a file: /usr/bin/c++    -MD -MT CMakeFiles/tracker.dir/main.cpp.o -MF CMakeFiles/tracker.dir/main.cpp.o.d -o CMakeFiles/tracker.dir/main.cpp.o -c /home/jeremy-lin/hello_cpp/main.cpp

These lines link: /usr/bin/cmake -E cmake_link_script CMakeFiles/tracker.dir/link.txt --verbose=1
/usr/bin/c++ -Wl,--dependency-file=CMakeFiles/tracker.dir/link.d CMakeFiles/tracker.dir/main.cpp.o CMakeFiles/tracker.dir/math_utils.cpp.o -o tracker

These two lines are much longer than the commands I typed by hand in Task 2.
