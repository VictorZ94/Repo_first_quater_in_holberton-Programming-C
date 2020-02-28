to create the static library
1. you must all the files .c and headerfile.h
2. run this command "gcc -Wall -pedantic -Werror -Wextra -c * .c" this create all the files .o that they pass prepocessing.
3. run this command "ar -rc libholbertonschool.a * .o" this create the library and automatically save within the files .o
4. run this command "ar -t libholbertonschool.a" this list the files within static library created for you.
5. run this command "ranlib libholbertonschool.a" index the file.
6. you use your functions and execute them.
