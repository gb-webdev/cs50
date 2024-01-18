To collect command-line arguments from the user, declare main as:

    int main(int argc, strinig argv[])
    {

    }

These two special arguments enable you to know what data the user provided at the command line and how much data they have provided

    argc (argument count): 
        - This integer type var will store the number of command line args the user typed when the program was executed
        - argc itself will count as one of these command line args

    argv[] (argument vector)
        - This array of strings stores one string per element, the actual user typed text at the command line when the program was executed
        - The first element of argv is always found at argv[0]
        - The last element of argv is always found at argv[argc-1]

    Example: 

                ./example 2024 cs50

            argv indicies               argv contents
            
            argv[0]                     "./example"
            argv[1]                     "2024"
            argv[2]                     "cs50"
            argv[3]                     "???"  (most likely a segmentation fault from compiiler if attempted)