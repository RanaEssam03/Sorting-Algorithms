# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/sortlib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sortlib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sortlib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sortlib.dir/flags.make

CMakeFiles/sortlib.dir/sortlib.cpp.obj: CMakeFiles/sortlib.dir/flags.make
CMakeFiles/sortlib.dir/sortlib.cpp.obj: ../sortlib.cpp
CMakeFiles/sortlib.dir/sortlib.cpp.obj: CMakeFiles/sortlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sortlib.dir/sortlib.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sortlib.dir/sortlib.cpp.obj -MF CMakeFiles\sortlib.dir\sortlib.cpp.obj.d -o CMakeFiles\sortlib.dir\sortlib.cpp.obj -c "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\sortlib.cpp"

CMakeFiles/sortlib.dir/sortlib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sortlib.dir/sortlib.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\sortlib.cpp" > CMakeFiles\sortlib.dir\sortlib.cpp.i

CMakeFiles/sortlib.dir/sortlib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sortlib.dir/sortlib.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\sortlib.cpp" -o CMakeFiles\sortlib.dir\sortlib.cpp.s

# Object files for target sortlib
sortlib_OBJECTS = \
"CMakeFiles/sortlib.dir/sortlib.cpp.obj"

# External object files for target sortlib
sortlib_EXTERNAL_OBJECTS =

sortlib.exe: CMakeFiles/sortlib.dir/sortlib.cpp.obj
sortlib.exe: CMakeFiles/sortlib.dir/build.make
sortlib.exe: CMakeFiles/sortlib.dir/linklibs.rsp
sortlib.exe: CMakeFiles/sortlib.dir/objects1.rsp
sortlib.exe: CMakeFiles/sortlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sortlib.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sortlib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sortlib.dir/build: sortlib.exe
.PHONY : CMakeFiles/sortlib.dir/build

CMakeFiles/sortlib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sortlib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sortlib.dir/clean

CMakeFiles/sortlib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms" "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms" "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug" "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug" "D:\Data Structures\assignment1_dataStructures\Sorting-Algorithms\cmake-build-debug\CMakeFiles\sortlib.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/sortlib.dir/depend

