# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /cygdrive/c/Users/Administrator/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Administrator/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/code/algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/code/algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test-event.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test-event.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test-event.dir/flags.make

CMakeFiles/test-event.dir/test/test-event.c.o: CMakeFiles/test-event.dir/flags.make
CMakeFiles/test-event.dir/test/test-event.c.o: ../test/test-event.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/code/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test-event.dir/test/test-event.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test-event.dir/test/test-event.c.o   -c /cygdrive/e/code/algorithm/test/test-event.c

CMakeFiles/test-event.dir/test/test-event.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test-event.dir/test/test-event.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/e/code/algorithm/test/test-event.c > CMakeFiles/test-event.dir/test/test-event.c.i

CMakeFiles/test-event.dir/test/test-event.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test-event.dir/test/test-event.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/e/code/algorithm/test/test-event.c -o CMakeFiles/test-event.dir/test/test-event.c.s

# Object files for target test-event
test__event_OBJECTS = \
"CMakeFiles/test-event.dir/test/test-event.c.o"

# External object files for target test-event
test__event_EXTERNAL_OBJECTS =

test-event.exe: CMakeFiles/test-event.dir/test/test-event.c.o
test-event.exe: CMakeFiles/test-event.dir/build.make
test-event.exe: src/core/libcore.a
test-event.exe: src/algorithm/libstl.a
test-event.exe: CMakeFiles/test-event.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/code/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test-event.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-event.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test-event.dir/build: test-event.exe

.PHONY : CMakeFiles/test-event.dir/build

CMakeFiles/test-event.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test-event.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test-event.dir/clean

CMakeFiles/test-event.dir/depend:
	cd /cygdrive/e/code/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/code/algorithm /cygdrive/e/code/algorithm /cygdrive/e/code/algorithm/cmake-build-debug /cygdrive/e/code/algorithm/cmake-build-debug /cygdrive/e/code/algorithm/cmake-build-debug/CMakeFiles/test-event.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test-event.dir/depend

