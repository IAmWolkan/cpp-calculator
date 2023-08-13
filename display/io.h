#ifndef DISPLAY_IO_H
#define DISPLAY_IO_H

#include <string>

class io {
  public:
    static std::string input();
    static void output(std::string text);
    static std::string ask(std::string text);
};

#endif
