# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/murray/Projects/chessbot/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/murray/Projects/chessbot/build

# Include any dependencies generated for this target.
include nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/depend.make

# Include the progress variables for this target.
include nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/progress.make

# Include the compile flags for this target's objects.
include nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/flags.make

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/flags.make
nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o: /home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/src/gazebo_taskboard/GazeboTaskboard.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/murray/Projects/chessbot/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o"
	cd /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o -c /home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/src/gazebo_taskboard/GazeboTaskboard.cpp

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.i"
	cd /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/src/gazebo_taskboard/GazeboTaskboard.cpp > CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.i

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.s"
	cd /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard/src/gazebo_taskboard/GazeboTaskboard.cpp -o CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.s

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.requires:
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.requires

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.provides: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.requires
	$(MAKE) -f nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/build.make nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.provides.build
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.provides

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.provides.build: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o

# Object files for target gazebo_taskboard
gazebo_taskboard_OBJECTS = \
"CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o"

# External object files for target gazebo_taskboard
gazebo_taskboard_EXTERNAL_OBJECTS =

/home/murray/Projects/chessbot/devel/lib/libgazebo_taskboard.so: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o
/home/murray/Projects/chessbot/devel/lib/libgazebo_taskboard.so: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/build.make
/home/murray/Projects/chessbot/devel/lib/libgazebo_taskboard.so: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/murray/Projects/chessbot/devel/lib/libgazebo_taskboard.so"
	cd /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gazebo_taskboard.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/build: /home/murray/Projects/chessbot/devel/lib/libgazebo_taskboard.so
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/build

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/requires: nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/src/gazebo_taskboard/GazeboTaskboard.cpp.o.requires
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/requires

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/clean:
	cd /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard && $(CMAKE_COMMAND) -P CMakeFiles/gazebo_taskboard.dir/cmake_clean.cmake
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/clean

nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/depend:
	cd /home/murray/Projects/chessbot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/murray/Projects/chessbot/src /home/murray/Projects/chessbot/src/nasa_r2_simulator/gazebo_taskboard /home/murray/Projects/chessbot/build /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard /home/murray/Projects/chessbot/build/nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : nasa_r2_simulator/gazebo_taskboard/CMakeFiles/gazebo_taskboard.dir/depend
