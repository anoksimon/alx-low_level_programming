#!/bin/bash
gcc -Wall  -Werror  -Wextra  -c b*.c
ar  rc liball.a  *.o

