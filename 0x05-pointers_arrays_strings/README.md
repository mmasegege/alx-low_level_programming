C Strings - Arrays and Pointers

Review

Arrays can be declared with an explicit size:

char buffer[MAXSIZE+1] ;  // hold a string of at most MAXSIZE characters + terminating NUL ('\0')



Arrays can be initialized, which sets the array's size and the initial contents:

char mesg[] = "Hello!" ;  // a 7 element array - 6 characters in Hello! + terminating NUL



An array name is a constant pointer to the first (0th) array element; thus:

mesg == &mesg[0] ;  // address of the first character in the message.

mesg[0] == *mesg ;  // the 0th element of an array is the same as dereferencing mesg as a pointer.



Pointer variables (of the appropriate type) can be assigned an array identifier:

char *p = mesg ;    // *p == mesg[0] == *mesg == 'H'



Pointers can be dereferenced to get or set the value they point to:

char ch ;

ch = *p ;  // ch == 'H'

Pointers can be indexed like arrays  (rarely done but useful at times):

ch = p[4] ;  // ch == 'o'



Pointers can have integers added or subtracted to generate new pointers:

char *q ;

q = p + 4 ;  // q points to the character 4 past p (here, *q == 'o')



Pointer difference gives the "distance" in underlying type units between two pointers:

int dist ;

dist = q - p ;  // dist == 4



++ and -- work on pointers, adjusting them by the size of the underlying type:

p++ ;           // increment p; points to the next character

q-- ;           // decrement q; points to the previous character

dist = q - p ;  // dist == 2

Combining dereferencing and increment/decrement:

p = mesg ;

ch = *p++ ;     // ch == 'H' and p == &mesg[1]

q = mesg + 4 ;

ch = *q-- ;     // ch == 'o' and q == &mesg[3]



p = mesg ;

ch = *++p ;     // ch == 'e' and p == &mesg[1]

q = mesg + 4 ;

ch = *--q ;     // ch == 'l' and q == &mesg[3]



Setup

For this activity you will implement three versions of a basic find function to find information in a string; in two of the three cases you will implement both an array version with indexing and a pointer version using pointer arithmetic.

Create a directory Find at the top level of your git repository.Download the file find.zip into this directory, extract the archive contents, and remove the zip file:

unzip find.zip

rm find.zip



At this point the directory should contain the following files:

ActivityJournal.txt

Makefile

find.h

find.c

test_find.c

Make the executable test_find (the default target of the Makefile) and execute the result:

make

./test_find



Obviously most of the assertions will fail as the bodies of the functions in find.c are all skeletons, but if you see output similar to the following you'll know that you downloaded and compiled the skeleton successfully:



** Tests of find_ch_index **

Assertion failure (test_find.c @ 85): 'a' not at position 0 in "abccba"

Assertion failure (test_find.c @ 87): 'b' not at position 1 in "abccba"

Assertion failure (test_find.c @ 89): 'c' not at position 2 in "abccba"

** Test failed - exiting **

*** TEST SUMMARY ***

1 test, 4 assertions (1 passed/3 failed)



Note: Assertion failures usually give a diagnostic message and always give the name of the test file (here test_find.c) and line number of the assertion that failed.

At this point, use git to add, commit, and push the skeleton. This will show that you at least were able to initialize the project.



Activities

Overview

File find.h declares the interfaces for five variants of a "find" function using both character arrays and character pointers, file find.c contains skeleton implementations of these functions, and test_find.c contains unit tests for the functions (you may assume any string arguments to the functions are properly terminated):



int find_ch_index(char string[], char ch)

Return the index / position of the first occurrence of ch in the string, or NOT_FOUND (defined in find.c) if ch does not occur in string.

char *find_ch_ptr(char *string, char ch)

Return a pointer to the first occurrence of ch in the string, or NULL if ch does not occur in string. Your implementation may NOT use integers or indexing.

int find_any_index(char string[], char stop[])

Return the index / position of the first occurrence of any character in stop in the string, or NOT_FOUND if string contains none of the characters in stop. If stop is the empty string (i.e., "") then find_any_index will always return NOT_FOUND, though you should not make a special case for this.

char *find_any_ptr(char *string, char* stop)

Return a pointer to the first occurrence of any character in stop in the string, or NULL if string contains none of the characters in stop. Your implementation may NOT use integers or indexing. As with the previous function, if stop is the empty string (i.e., "") then find_any_ptr will always return NULL, though you should not make a special case for this.

char *find_substr(char *string, char* substr)

Return a pointer to the first occurrence of substr within the string, or NULL if substr is not a substring contained within string. Your implementation may NOT use integers or indexing. Note also that an empty substring (i.e., "") is a substring of any other string starting at the first (0th) character.

Example:

   find_substr("Jacy Flack", "ack") returns a pointer to 'a' in "Flack".

Implementation and Testing

The unit tests in test_find.c exercise the five functions in find.c in the order given in the Overview above.

If an assertion within any function's tests fails, then no tests of the following functions will be run.

For this reason, you should implement, test, debug, and fix the functions in the order given.

Use the make command to build your executable test_find program:

make

         Creates and up-to-date version of test_find.

make clean

         Removes out any cruft (backup files, object files, executable, etc.)

Execute the tests:

./test_find

After you have a version of a function that passes the tests, do a git add / commit / push before going on to the next function. This will ensure you receive credit for all the functions you are able to complete.

Activity Journal

As always, complete the Activity Journal, including your estimated time, your plan, your actual time, and observations.



Assessment (100 points)

We will pull your repository after the due date; the assessment is in terms of this pulled information. We will compile and link your program using the simple command:

    make

If this does not create a program test_find without syntax or linking errors you cannot receive a grade above 35, and your grade will almost certainly be less than this.



4 points for a properly named submission directory (Find)

4 points when submission directory contains at least find.h, find.c, test_find.c, Makefile, ActivityJournal.txt

2 points for generation of executable program test_find without syntax or linking errors.

50 points for assertions (2 points per each assertion passed).

20 points for function tests (4 points for each test passed - that is, all the test's assertions pass).

10 points for the implementation quality of submitted find.c.

2 for consistent indentation.

2 for meaningful and appropriate variable names.

3 for appropriate use of statements and control structures.

3 for readability and simplicity.

10 points for the ActivityJournal.txt

2 for estimated and actual time.

4 for plan quality.

4 for observation quality.
