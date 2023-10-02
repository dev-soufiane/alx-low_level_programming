# More singly linked lists 📋

## Description

This repository contains C programs that demonstrate various operations on singly linked lists. Each program corresponds to a specific task as outlined below:

1. **0. Print list**
    - File: `0-print_listint.c`
    - Description: Write a function that prints all the elements of a `listint_t` list and returns the number of nodes.
    - Prototype: `size_t print_listint(const listint_t *h);`

2. **1. List length**
    - File: `1-listint_len.c`
    - Description: Write a function that returns the number of elements in a `listint_t` list.
    - Prototype: `size_t listint_len(const listint_t *h);`

3. **2. Add node**
    - File: `2-add_nodeint.c`
    - Description: Write a function that adds a new node at the beginning of a `listint_t` list and returns the address of the new element, or `NULL` if it fails.
    - Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`

4. **3. Add node at the end**
    - File: `3-add_nodeint_end.c`
    - Description: Write a function that adds a new node at the end of a `listint_t` list and returns the address of the new element, or `NULL` if it fails.
    - Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`

5. **4. Free list**
    - File: `4-free_listint.c`
    - Description: Write a function that frees a `listint_t` list.
    - Prototype: `void free_listint(listint_t *head);`

6. **5. Free (with pointer to head)**
    - File: `5-free_listint2.c`
    - Description: Write a function that frees a `listint_t` list and sets the head to `NULL`.
    - Prototype: `void free_listint2(listint_t **head);`

7. **6. Pop**
    - File: `6-pop_listint.c`
    - Description: Write a function that deletes the head node of a `listint_t` list and returns the head node's data.
    - Prototype: `int pop_listint(listint_t **head);`

8. **7. Get node at index**
    - File: `7-get_nodeint.c`
    - Description: Write a function that returns the nth node of a `listint_t` list.
    - Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`

9. **8. Sum list**
    - File: `8-sum_listint.c`
    - Description: Write a function that returns the sum of all the data (n) of a `listint_t` list.
    - Prototype: `int sum_listint(listint_t *head);`

10. **9. Insert**
    - File: `9-insert_nodeint.c`
    - Description: Write a function that inserts a new node at a given position in a `listint_t` list.
    - Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`

11. **10. Delete at index**
    - File: `10-delete_nodeint.c`
    - Description: Write a function that deletes the node at a specified index in a `listint_t` list.
    - Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`

## Usage

You can compile and run each of the programs individually as follows:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o program_name
./program_name
