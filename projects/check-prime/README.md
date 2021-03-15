## Check Prime

Check if a user provided input is a prime number

## What you will learn in this project:
- Getting user input using `scanf()`
- `"%d"` and `"%s"` modifier for `printf` and `scanf`
- `"%d"` : decimal
- `"%s"` : string
- Writing your first function
- Ternary operator in C

## Some other points:

- Understanding ternary operator in C:
  ```c
  expression ? something : otherthing
  ```
  In the above case, if the `expression` is true it will be `something` else `otherthing`

  Basically, ternary operator is like a `if`-`else` block:
  ```c
  if(expression) {
  	something;
  } else {
  	otherthing;
  }
  ```

- `printf()` and `scanf()` modifiers:
  1. `%c`: A single character.
  2. `%d`/`%i`: Signes decimal character.
  3. `%u`: Unsigned decimal integer.
  4. `%o`: Octal Integar.
  5. `%x`: Hexadecimal integer.
  6. `%f`: `double` numbers
  7. `%l`: `long` numbers
  8. `%s`: String of characters / `char*`

  Example usages:
  ```c
  // %d modifier
  printf("The number is %d", 1234);
  // Expected output: "The number is 1234"

  // %s modifier
  printf("This is a %s", "test string.");
  // Expected output: "This is a test string"
  ```
