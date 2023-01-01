# Configure

    > gn gen out

# Build

    > ninja -C out -t compdb cxx cc > compile_commands.json

# Run

    > ./out/hello --help

# Generate compilation databse

    > ninja -C out -t compdb cxx cc > compile_commands.json
