# Data Structures and Algorithms

## Setup (only in Windows for now)

>Pre-requisite : C++ compilers and Java JDK both installed and added to PATH.

1. `.vscode/tasks.json` creates a task, it has functionality for both C++ and Java. Simply turn the `setDefault` to `true` in whichever language is being used.
2. Do not use any package names for any of the Java files, since thats the easiest way we can plug and play with the task. Ignore the VSCode linting errors.

## Folder Structure

1. `playground` is used for learning and understanding concepts.
2. `problems` used for solving problems
3. Both have C++ and Java support
4. Each problem will have its own `input.txt` for taking input from and `output.txt` to print output into.

## Known issues

1. Doesn't work with `Windows Powershell` as it requires special syntax. Temporary Fix is to force task to use `command-prompt`.
