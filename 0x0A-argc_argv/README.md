5.10 Command-line Arguments
In environments that support C, there is a way to pass command-line arguments or parameters
to a program when it begins executing. When main is called, it is called with two arguments.
The first (conventionally called argc, for argument count) is the number of command-line
arguments the program was invoked with; the second (argv, for argument vector) is a pointer
to an array of character strings that contain the arguments, one per string. We customarily use
multiple levels of pointers to manipulate these character strings.
