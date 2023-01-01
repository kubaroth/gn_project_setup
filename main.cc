#include <iostream>
#include <vector>
#include <string>

#include "base/command_line.h"

// #include "base/strings/utf_string_conversions.h"

#include "gn/commands.h"
#include "gn/standard_out.h"   // stdout decorations Enum
#include "gn/err.h"

namespace {

std::vector<std::string> GetArgs(const base::CommandLine& cmdline) {
    base::CommandLine::StringVector in_args = cmdline.GetArgs();
#if defined(OS_WIN)
    std::vector<std::string> out_args;
    for (const auto& arg : in_args)
        out_args.push_back(base::UTF16ToUTF8(arg));
    return out_args;
#else
    return in_args;
#endif
}

}  // namespace

int main(int argc, char** argv) {
    using namespace std;
    cout << "Using GN command line" << endl;
    // return 0;

    base::CommandLine::Init(argc, argv);

    const base::CommandLine& cmdline = *base::CommandLine::ForCurrentProcess();
    std::vector<std::string> args = GetArgs(cmdline);

    std::string command;
    if (cmdline.HasSwitch("help") || cmdline.HasSwitch("h")) {

        OutputString("my message:\n", DECORATION_YELLOW);
        OutputString(R"(
  Some
  multiline
  text
  - wrapped with parenthesis which are not printed.
)");

    } else if (args.empty()) {
    // No command, print error and exit.
    Err(Location(), "No command specified.",
        "This is just an exmple..\n"
        "...for now just put any string followed hellow command.")
        .PrintToStdout();
    return 1;
    }

}
