# Memory Allocation and Freeing 🌟

In this directory, we dive into memory allocation and freeing in C using the `malloc` and `free` functions. Each program showcases different aspects of dynamic memory management.

## Program Overview

### 0. Float like a butterfly, sting like a bee

- **Description:** Write a function that creates an array of chars and initializes it with a specific char. Returns a pointer to the array or NULL if it fails.

- **Usage:** Check the provided example in `0-main.c` for how to use the `create_array` function.

### 1. The woman who has no imagination has no wings

- **Description:** Write a function that returns a pointer to a newly allocated space in memory containing a copy of the given string. Returns NULL if `str` is NULL or if memory allocation fails.

- **Usage:** See `1-main.c` for an example of using the `_strdup` function.

### 2. He who is not courageous enough to take risks will accomplish nothing in life

- **Description:** Write a function that concatenates two strings and returns a pointer to the concatenated string. Treats NULL as an empty string and returns NULL on failure.

- **Usage:** Explore `2-main.c` for an example of using the `str_concat` function.

### 3. If you even dream of beating me, you'd better wake up and apologize

- **Description:** Write a function that returns a pointer to a 2-dimensional array of integers. Each element is initialized to 0. Returns NULL on failure or if `width` or `height` is 0 or negative.

- **Usage:** Check out `3-main.c` for an example of using the `alloc_grid` function to create and print a grid.

### 4. It's not bragging if you can back it up

- **Description:** Write a function that frees a 2-dimensional grid previously created by `alloc_grid`.

- **Usage:** Review `4-main.c` for an example of using the `free_grid` function to deallocate memory.

## How to Use

For each program, navigate to its directory and follow the usage instructions provided above. Experiment with different inputs to understand memory allocation and freeing in C.

## Important Notes

- Memory allocation and freeing are crucial aspects of programming, so pay attention to how these functions work.
- Always check if memory allocation was successful before using allocated memory.
- Proper memory management helps prevent memory leaks.
- These programs demonstrate dynamic memory management in C.
- Enjoy exploring and honing your memory allocation skills!

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to explore and practice dynamic memory allocation and freeing with these programs. If you have any questions or suggestions, please don't hesitate to open an issue or reach out.

Happy coding! 🚀
