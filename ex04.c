/*#include <stdio.h>
*
* Warning: This program is wrong on purpose.
*
*int main()
*{
*    int age = 10;
*    int height;
*
*    printf("I am %d years old.\n");
*    printf("I am %d inches tall.\n", height);
*
*   return 0;
*}
*/

//$ valgrind ./ex04
//==3089== Memcheck, a memory error detector
//==3089== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
//==3089== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
//==3089== Command: ./ex04
//==3089==
//I am -16777400 years old.
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E81096: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Use of uninitialised value of size 8
//==3089==    at 0x4E7D19B: _itoa_word (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E8135D: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E7D1A5: _itoa_word (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E8135D: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E813CE: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E8116A: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E817BC: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E811BA: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//==3089== Conditional jump or move depends on uninitialised value(s)
//==3089==    at 0x4E811FA: vfprintf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x4E88038: printf (in /usr/lib64/libc-2.21.so)
//==3089==    by 0x400567: main (ex04.c:12)
//==3089==
//I am 0 inches tall.
//==3089==
//==3089== HEAP SUMMARY:
//==3089==     in use at exit: 0 bytes in 0 blocks
//==3089==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
//==3089==
//==3089== All heap blocks were freed -- no leaks are possible
//==3089==
//==3089== For counts of detected and suppressed errors, rerun with: -v
//==3089== Use --track-origins=yes to see where uninitialised values come from
//==3089== ERROR SUMMARY: 8 errors from 8 contexts (suppressed: 0 from 0)


#include <stdio.h>

/* Fixed programm*/

int main()
{
    int age = 10;
    int height = 14;

    printf("I am %d years old.\n", age);
    printf("I am %d inches tall.\n", height);

    return 0;
}

//==3632== Memcheck, a memory error detector
//==3632== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
//==3632== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
//==3632== Command: ./ex04
//==3632==
//I am 10 years old.
//I am 14 inches tall.
//==3632==
//==3632== HEAP SUMMARY:
//==3632==     in use at exit: 0 bytes in 0 blocks
//==3632==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
//==3632==
//==3632== All heap blocks were freed -- no leaks are possible
//==3632==
//==3632== For counts of detected and suppressed errors, rerun with: -v
//==3632== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

