# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/decker/Git/bihologram/Biholograma

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/decker/Git/bihologram/Biholograma

# Include any dependencies generated for this target.
include CMakeFiles/holograma.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/holograma.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/holograma.dir/flags.make

CMakeFiles/holograma.dir/src/main.cpp.o: CMakeFiles/holograma.dir/flags.make
CMakeFiles/holograma.dir/src/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/decker/Git/bihologram/Biholograma/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/holograma.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/holograma.dir/src/main.cpp.o -c /home/decker/Git/bihologram/Biholograma/src/main.cpp

CMakeFiles/holograma.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/holograma.dir/src/main.cpp.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_PREPROCESSED_SOURCE

CMakeFiles/holograma.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/holograma.dir/src/main.cpp.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_ASSEMBLY_SOURCE

CMakeFiles/holograma.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/holograma.dir/src/main.cpp.o.requires

CMakeFiles/holograma.dir/src/main.cpp.o.provides: CMakeFiles/holograma.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/holograma.dir/build.make CMakeFiles/holograma.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/holograma.dir/src/main.cpp.o.provides

CMakeFiles/holograma.dir/src/main.cpp.o.provides.build: CMakeFiles/holograma.dir/src/main.cpp.o

# Object files for target holograma
holograma_OBJECTS = \
"CMakeFiles/holograma.dir/src/main.cpp.o"

# External object files for target holograma
holograma_EXTERNAL_OBJECTS =

holograma: CMakeFiles/holograma.dir/src/main.cpp.o
holograma: CMakeFiles/holograma.dir/build.make
holograma: CMakeFiles/holograma.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable holograma"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/holograma.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/holograma.dir/build: holograma
.PHONY : CMakeFiles/holograma.dir/build

CMakeFiles/holograma.dir/requires: CMakeFiles/holograma.dir/src/main.cpp.o.requires
.PHONY : CMakeFiles/holograma.dir/requires

CMakeFiles/holograma.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/holograma.dir/cmake_clean.cmake
.PHONY : CMakeFiles/holograma.dir/clean

CMakeFiles/holograma.dir/depend:
	cd /home/decker/Git/bihologram/Biholograma && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/decker/Git/bihologram/Biholograma /home/decker/Git/bihologram/Biholograma /home/decker/Git/bihologram/Biholograma /home/decker/Git/bihologram/Biholograma /home/decker/Git/bihologram/Biholograma/CMakeFiles/holograma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/holograma.dir/depend

