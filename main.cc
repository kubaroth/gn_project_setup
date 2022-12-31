#include <iostream>
#include "base/command_line.h"

using namespace std;
int main(int argc, char** argv) {
    cout << "Using GN command line" <<endl;
    return 0;

    base::CommandLine::Init(argc, argv);

//   const base::CommandLine& cmdline = *base::CommandLine::ForCurrentProcess();
//   std::vector<std::string> args = GetArgs(cmdline);

//   std::string command;
//   if (cmdline.HasSwitch("help") || cmdline.HasSwitch("h")) {
//     // Make "-h" and "--help" default to help command.
//     command = commands::kHelp;
//   } else if (cmdline.HasSwitch(switches::kVersion)) {
//     // Make "--version" print the version and exit.
//     OutputString(std::string(LAST_COMMIT_POSITION) + "\n");
//     exit(0);
//   } else if (args.empty()) {
//     // No command, print error and exit.
//     Err(Location(), "No command specified.",
//         "Most commonly you want \"gn gen <out_dir>\" to make a build dir.\n"
//         "Or try \"gn help\" for more commands.")
//         .PrintToStdout();
//     return 1;
//   } else {
//     command = args[0];
//     args.erase(args.begin());
//   }

//   if (!commands::CommandSwitches::Init(cmdline))
//     return 1;

//   const commands::CommandInfoMap& command_map = commands::GetCommands();
//   commands::CommandInfoMap::const_iterator found_command =
//       command_map.find(command);

//   int retval;
//   if (found_command != command_map.end()) {
//     MsgLoop msg_loop;
//     retval = found_command->second.runner(args);
//   } else {
//     Err(Location(), "Command \"" + command + "\" unknown.").PrintToStdout();
//     OutputString(
//         "Available commands (type \"gn help <command>\" for more details):\n");
//     for (const auto& cmd : commands::GetCommands())
//       PrintShortHelp(cmd.second.help_short);

//     retval = 1;
//   }

//   exit(retval);  // Don't free memory, it can be really slow!
// }
    
}
