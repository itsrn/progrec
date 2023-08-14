# progrec

![Static Badge](https://img.shields.io/badge/made_with-c-black)

> _🍫 A lightweight C library for progress bars_

### Features

- Simple and easy to use 🛠️
- Supports yellow, blue and green colors 🎨
- Weights less then 5kb ⚖️

## Installation

First, download the code from this github repository using the following command:

```bash
git clone https://github.com/itsrn/progrec.git
cd progrec
```

After downloading and entering to the directory of the cloned repository, you can edit the file `test.c` _(you can also import only the `progrec.c`, `progrec.o` and `progrec.h` file to an existing directory, without cloning the entire repository)_.

To run your code, you will need to run the following commands in your terminal (make sure that you have `gcc` installed):

```bash
gcc YOUR_C_FILE progrec.o -o OUTPUT_EXECUTABLE_FILE_NAME
```

Replace the `YOUR_C_FILE` with the actual C file name and extension you have in the same directory. Make sure to run this in the same directory as the progrec files you've installed. Replace the `OUTPUT_EXECUTABLE_FILE_NAME` with the name you want to use for the output file.

Once you're done, with all of that, you can simply run your code with:

```bash
./OUTPUT_EXECTUABLE_FILE_NAME
```

And again, replace `OUTPUT_EXECUTABLE_FILE_NAME` with the actual exectuable file name you set in the previous command.

## Usage

The main function of this library is `progrec`, which is a void function with some parameters.

```c
progrec(precent, color)
```

Example usage:

```c
#include "progrec.h"

int main()
{
    progrec(20, NULL);  // set progress bar to 20 precent
    usleep(1000000);       // sleep for 1 second
    progrec(100, NULL); // set progress bar to 100 precent
}
```

Here is a detailed table of the parameters of the function:
Field | Type | Description | Required
--- | --- | --- | ---
precent | int | The precentage of the progress bar that will be displayed, between 0 to 100 | yes
color | char | The color of the progress bar that will be displayed. "blue", "yellow" or "green" is currently supported (NULL for white) | yes

## Contributing / Reporting issues

Contributions are welcome, feel free to open a pull request. If you found any issues with this library please let me know about it by opening an issue.

## License

This library is licensed under [Apache License, Version 2.0][def].


[def]: /LICENSE
