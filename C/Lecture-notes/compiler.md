C has compiles code, this happpens when we run our $ make/clang command automatically.

There are 4 steps that happen when we compile code

Preprocessing:

    Any line with a hash is anlyised initally, so our #include files or header files. 
    The compiler goes into these header files and copy and pastes the data, they contain declerations.
    It combines the declerations so we don't have to type them every time.
    A lof of this pre-pprocessiing code isn't used from the header files. But it's there in case we need it.

Compiling:

    The code is compiled with make or clang etc.
    It is then broken down into assembly language

Assembling:

    Assembly language is what your C code is compiled into. it is close to what phones and computers (macs and servers) understand today. This is converted further into binary.

    mov  dx, msg
    mov  ah, 9
    int  0x21

    mov  dl, 0x0d
    mov  ah, 2
    int  0x21

    mov  dl, 0x0a
    mov  ah, 2
    int  0x21

    mov  ah, 0x4c
    int  0x21

Linking:

    The code from your file, the code from the cs50.h library and the code from the stdio.h library are all combined.

    file.c           cs50           stdio
000111001010      000000111000     111110001111111

                     Linked

    000111001010000000111000111110001111111                 


These are all of the steps every tiime you compile your files.