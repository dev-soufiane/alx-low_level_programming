# Static Libraries 📚

In this directory, we delve into the world of static libraries. We create a static library called `libmy.a` containing various functions listed below. Additionally, we provide a script, `create_static_lib.sh`, to help you create a static library called `liball.a` from all the `.c` files in the current directory.

## Functions Overview

### 0. A library is not a luxury but one of the necessities of life

- **Description:** Create the static library `libmy.a` containing the following functions:

   - `int _putchar(char c);`
   - `int _islower(int c);`
   - `int _isalpha(int c);`
   - `int _abs(int n);`
   - `int _isupper(int c);`
   - `int _isdigit(int c);`
   - `int _strlen(char *s);`
   - `void _puts(char *s);`
   - `char *_strcpy(char *dest, char *src);`
   - `int _atoi(char *s);`
   - `char *_strcat(char *dest, char *src);`
   - `char *_strncat(char *dest, char *src, int n);`
   - `char *_strncpy(char *dest, char *src, int n);`
   - `int _strcmp(char *s1, char *s2);`
   - `char *_memset(char *s, char b, unsigned int n);`
   - `char *_memcpy(char *dest, char *src, unsigned int n);`
   - `char *_strchr(char *s, char c);`
   - `unsigned int _strspn(char *s, char *accept);`
   - `char *_strpbrk(char *s, char *accept);`
   - `char *_strstr(char *haystack, char *needle);`

   If any of the above functions are not implemented, create empty ones with the correct prototypes.

- **Usage:** Create `libmy.a` and use it in your code as demonstrated in `main.c`.

### 1. Without libraries what have we? We have no past and no future

- **Description:** Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory.

- **Usage:** Execute `create_static_lib.sh` to generate `liball.a` containing the compiled object files from the `.c` files in the current directory.

## How to Use

For Task 0, compile the `libmy.a` library and use it in your programs by including `main.h`.

For Task 1, run the `create_static_lib.sh` script to create a static library `liball.a` from all the `.c` files in the current directory.

## Important Notes

- Ensure your functions meet the specified prototypes.
- Verify the correctness of your solutions by thorough testing.
- Explore and practice your coding skills with static libraries.
- Enjoy the journey of learning and coding!

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to dive into the world of static libraries and enhance your programming knowledge. If you have any questions or suggestions, please don't hesitate to open an issue or reach out.

Happy coding! 🚀
