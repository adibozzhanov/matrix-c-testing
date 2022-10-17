# Task Description

For this exercise you will need to split into pairs. One of you will implement a matrix
in C and the other will write tests for that implementation. Both of you can see the
Documentation of the matrix API in the ``src/matrix/matrix.h`` file.

You will need to create a branch and name it according to this format:

	<name1>-<name2>

i.e if there was a pair of people, Adi and Alex, the branch name would be:

	adi-alex

Once this is done decide who will be implementing and who will be testing.
Now that you have decided, check instructions for your role below.


## Implementing

You will be working inside of the `src` directory.

Copy the folder `/src/matrix` and name it like so `<name>-matrix`. You can see an example
of the copied folder `adi-matrix` inside of the `src` directory.

Now write your implementation in `matrix.c`, if you want to run your code for a quick test
then use `main.c`. Make sure that your implementation is consistent with what is
described in `matrix.h`. Whenever you feel like you've managed to implement a single
function, and your testing-mate has tests for that function, you should both push your
code and run `make test DIR_NAME=<name-of-the-folder>` to see if it passes or fails anything.
i.e.

	make test DIR_NAME=adi-matrix

## Testing

You will be working inside of the `tests` directory.

Create a new file and name it `<name>_test.c`. Make sure it ends with `_test.c`
this is important. Now copy code from the template `adi_test.c` in there and write
tests that check different parts of the specification given in `matrix.h`.

How to write a test:

- Add a new function like so

		```c
		test name_of_your_test(){
			// your code goes here

			assertEQ(a,b);
		}

		```

- Make sure that the test is also added in the `TESTS(...)` Macro.

- That's it

Once your mate implements a function that you want to test, set
relevant tests for execution in the `TESTS(...)` and push your code.
Then just run `make test DIR_NAME=<name-of-the-folder>`. i.e.

	make test DIR_NAME=adi-matrix
