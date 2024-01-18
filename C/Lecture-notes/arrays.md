Arrays are a fundemental data structure, we use them to hold values of the same type at contiguous memory locations.
One way to analogize the notion of an array is to think of your local post office, which has large banks of post boxes.

Arrays:
    - A block of contiguous space in memory
    - Partitioned into small, identically sized blocks of space called elements
    - Each element can store a certain amount of data
    - All the same data type such as int or char
    - Can be accessed directly by an index

Post office boxes:
    - A mail bank is a large space on the wall of the post office
    - Partitioned into small, identically sized blocks of space called post office boxes
    - Each PO box can hold a certain amount of mail
    - All similar types such as letters or small packages
    - Can be accessed directly by a mailbox number

In C, elements of an array are indexed from 0
If an array consists of n elements, the first element is located at 0, The last element is located at index(n-1)
C is very lenient. It will not prevent you from going "out of bounds" of your array. Please be careful!

Array decleration:
    
    type name[size];

    - The type is what kind of variable each element of the array will be
    - The name is what you will call the array
    - The size is how many elements you would like your array to contain


    When declaring and iinitializing an array simultaneously, there is a special syntax that can be used to fill the array with starting values. 

    // instantiation syntax
    bool truthtable[3] = { false, true, false };

    // indiividual element syntax
    bool truthtable[3];
    truthtable[0] false;
    truthtable[1] true;
    truthtable[2] true;

Arrays can consist of more than a single dimensiion, you can have as many size specifiers as you wish

    bool battleship[10][10]

    You can choose to think of thiis either as a 10x10 grid of cells
    In memory though, it's just a 100-element one dimensional array
    Multi dimensional arrays are great abstractions to help visualize game boards or other complex representations.

While we can treat individual elements of arrays as vars, we cannot treat entire arrays themselves as vars
We cannot, for insteance, assign one array to another using the assignment operator. That's not legal C
Instead we must use a loop to copy over the elements one at a time

    int foo[5] = { 1, 2, 3, 4, 5 };
    int bar[5];

    for(int j = 0; j < 5; j++)
    {
        bar[j] = foo[j];
    }

ARRAYS DO NOT FOLLOW REGULAR SCOPE RULES AND ARE PASSED BY REFERANCE
THE CALLEE RECIEVES THE ACTUAL ARRAY, NOT A COPY OF IT!!!