# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/kokso/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/kokso/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/kokso/CLionProjects/untitled6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled6.dir/flags.make

CMakeFiles/untitled6.dir/main.c.o: CMakeFiles/untitled6.dir/flags.make
CMakeFiles/untitled6.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled6.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled6.dir/main.c.o   -c /cygdrive/c/Users/kokso/CLionProjects/untitled6/main.c

CMakeFiles/untitled6.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled6.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kokso/CLionProjects/untitled6/main.c > CMakeFiles/untitled6.dir/main.c.i

CMakeFiles/untitled6.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled6.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kokso/CLionProjects/untitled6/main.c -o CMakeFiles/untitled6.dir/main.c.s

CMakeFiles/untitled6.dir/func.c.o: CMakeFiles/untitled6.dir/flags.make
CMakeFiles/untitled6.dir/func.c.o: ../func.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/untitled6.dir/func.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled6.dir/func.c.o   -c /cygdrive/c/Users/kokso/CLionProjects/untitled6/func.c

CMakeFiles/untitled6.dir/func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled6.dir/func.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kokso/CLionProjects/untitled6/func.c > CMakeFiles/untitled6.dir/func.c.i

CMakeFiles/untitled6.dir/func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled6.dir/func.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kokso/CLionProjects/untitled6/func.c -o CMakeFiles/untitled6.dir/func.c.s

# Object files for target untitled6
untitled6_OBJECTS = \
"CMakeFiles/untitled6.dir/main.c.o" \
"CMakeFiles/untitled6.dir/func.c.o"

# External object files for target untitled6
untitled6_EXTERNAL_OBJECTS =

untitled6.exe: CMakeFiles/untitled6.dir/main.c.o
untitled6.exe: CMakeFiles/untitled6.dir/func.c.o
untitled6.exe: CMakeFiles/untitled6.dir/build.make
untitled6.exe: CMakeFiles/untitled6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable untitled6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled6.dir/build: untitled6.exe

.PHONY : CMakeFiles/untitled6.dir/build

CMakeFiles/untitled6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled6.dir/clean

CMakeFiles/untitled6.dir/depend:
	cd /cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/kokso/CLionProjects/untitled6 /cygdrive/c/Users/kokso/CLionProjects/untitled6 /cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug /cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug /cygdrive/c/Users/kokso/CLionProjects/untitled6/cmake-build-debug/CMakeFiles/untitled6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled6.dir/depend

