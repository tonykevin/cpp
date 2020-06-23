# C++

Learning the language C++.

## Intro

Create a file with the extension `.cpp` and write the following lines of code:

```c++
  #include <iostream>

  using namespace std;

  int main() {
    char name[32];

    cout<<"Your name: ";
    cin>>name;

    cout<<"✨ Hi "<<name<<"!\n";

    return 0;
  }

```

Then run the application with [gcc and Make](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html), but feel free to use other tools as you like.

Congratulations! :tada: :tada: has written your first lines of code in __c++__. Maybe you still do not understand the instructions of the program well, but little by little it will discover a language to communicate with computers. lets' start! :rocket:

## Variables

A variable allows to store data, these are usually characters, integers or decimals. In __C++__ there are reserved words to define a variable type:

| Variable type | Reserved keyword  |
| :------------ | ----------------- |
| Characters    | `char`            |
| Integers      | `int`             |
| Decimals      | `float`, `double` |

```c++
  #include <iostream>

  using namespace std;

  int main() {
    char letter;
    int friendsNumber;
    float weight;
    double earthLength;
  }
```

## Resource links

* [GCC and Make](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)
* [Configure makefile to compile cpp](https://www.ivofilot.nl/posts/view/19/Using+a+Makefile+for+compiling+your+program)

## License

[MIT](./LICENSE)
