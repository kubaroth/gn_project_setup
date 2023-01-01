# About
This is an example of using GN base (and gn_lib.a) as a dependency of a new project using GN + Ninja as a build system.

## Setup steps

- Make sure there is Clang, Ninja and Python avaialble.
- build GN : https://github.com/timniederhausen/gn/

    python build/gen.py --allow-warning
    ninja -C out

- update BUILD.gn in this project to point to generated base.a and gn_lib.a. (Using absolute paths for now):
  - include_dirs
  - libs
  
# Build

    > gn gen out

    > ninja -C out

    > ./out/hello --help

# Generate compilation databse

    > ninja -C out -t compdb cxx cc > compile_commands.json
