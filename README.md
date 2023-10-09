# Library Inventory Management

This C++ program simulates a library inventory management system. It allows you to perform the following actions:

- **Borrow a Book:** Borrow one or more books from the library's inventory.
- **Return a Book:** Return one or more books to the library.
- **Generate Overdue Notice:** Generate an overdue notice for a specified number of overdue books, calculating fines.
- **Exit:** Exit the program.

## Usage

1. When prompted, choose an option from the menu by entering the corresponding number.
2. Follow the on-screen prompts to perform the selected action.

## Variables

- `availableBooks`: Represents the number of books available in the library.
- `borrowedBooks`: Represents the number of books currently borrowed by users.
- `totalFines`: Keeps track of the total overdue fines collected.

## Borrowing and Returning Books

You can borrow and return books within the available quantity. The program checks if there are enough books to borrow or return, and it provides feedback accordingly.

## Generating Overdue Notices

You can generate overdue notices by specifying the number of overdue books. The program calculates fines based on a fixed rate of $5 per overdue book and updates the total overdue fines.

## Exit

Selecting the "Exit" option will exit the program.

Enjoy using this library inventory management system!
