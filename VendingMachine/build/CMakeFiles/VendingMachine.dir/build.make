# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build

# Include any dependencies generated for this target.
include CMakeFiles/VendingMachine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VendingMachine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VendingMachine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VendingMachine.dir/flags.make

CMakeFiles/VendingMachine.dir/Main.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/Main.cpp.o: ../Main.cpp
CMakeFiles/VendingMachine.dir/Main.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VendingMachine.dir/Main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/Main.cpp.o -MF CMakeFiles/VendingMachine.dir/Main.cpp.o.d -o CMakeFiles/VendingMachine.dir/Main.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Main.cpp

CMakeFiles/VendingMachine.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Main.cpp > CMakeFiles/VendingMachine.dir/Main.cpp.i

CMakeFiles/VendingMachine.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Main.cpp -o CMakeFiles/VendingMachine.dir/Main.cpp.s

CMakeFiles/VendingMachine.dir/Product.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/Product.cpp.o: ../Product.cpp
CMakeFiles/VendingMachine.dir/Product.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VendingMachine.dir/Product.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/Product.cpp.o -MF CMakeFiles/VendingMachine.dir/Product.cpp.o.d -o CMakeFiles/VendingMachine.dir/Product.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Product.cpp

CMakeFiles/VendingMachine.dir/Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/Product.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Product.cpp > CMakeFiles/VendingMachine.dir/Product.cpp.i

CMakeFiles/VendingMachine.dir/Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/Product.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/Product.cpp -o CMakeFiles/VendingMachine.dir/Product.cpp.s

CMakeFiles/VendingMachine.dir/ProductManager.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/ProductManager.cpp.o: ../ProductManager.cpp
CMakeFiles/VendingMachine.dir/ProductManager.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VendingMachine.dir/ProductManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/ProductManager.cpp.o -MF CMakeFiles/VendingMachine.dir/ProductManager.cpp.o.d -o CMakeFiles/VendingMachine.dir/ProductManager.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ProductManager.cpp

CMakeFiles/VendingMachine.dir/ProductManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/ProductManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ProductManager.cpp > CMakeFiles/VendingMachine.dir/ProductManager.cpp.i

CMakeFiles/VendingMachine.dir/ProductManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/ProductManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ProductManager.cpp -o CMakeFiles/VendingMachine.dir/ProductManager.cpp.s

CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o: ../VendingMachine.cpp
CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o -MF CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o.d -o CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/VendingMachine.cpp

CMakeFiles/VendingMachine.dir/VendingMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/VendingMachine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/VendingMachine.cpp > CMakeFiles/VendingMachine.dir/VendingMachine.cpp.i

CMakeFiles/VendingMachine.dir/VendingMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/VendingMachine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/VendingMachine.cpp -o CMakeFiles/VendingMachine.dir/VendingMachine.cpp.s

CMakeFiles/VendingMachine.dir/IdleState.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/IdleState.cpp.o: ../IdleState.cpp
CMakeFiles/VendingMachine.dir/IdleState.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/VendingMachine.dir/IdleState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/IdleState.cpp.o -MF CMakeFiles/VendingMachine.dir/IdleState.cpp.o.d -o CMakeFiles/VendingMachine.dir/IdleState.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/IdleState.cpp

CMakeFiles/VendingMachine.dir/IdleState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/IdleState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/IdleState.cpp > CMakeFiles/VendingMachine.dir/IdleState.cpp.i

CMakeFiles/VendingMachine.dir/IdleState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/IdleState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/IdleState.cpp -o CMakeFiles/VendingMachine.dir/IdleState.cpp.s

CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o: ../ReturnChangeState.cpp
CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o -MF CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o.d -o CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReturnChangeState.cpp

CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReturnChangeState.cpp > CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.i

CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReturnChangeState.cpp -o CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.s

CMakeFiles/VendingMachine.dir/ReadyState.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/ReadyState.cpp.o: ../ReadyState.cpp
CMakeFiles/VendingMachine.dir/ReadyState.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/VendingMachine.dir/ReadyState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/ReadyState.cpp.o -MF CMakeFiles/VendingMachine.dir/ReadyState.cpp.o.d -o CMakeFiles/VendingMachine.dir/ReadyState.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReadyState.cpp

CMakeFiles/VendingMachine.dir/ReadyState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/ReadyState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReadyState.cpp > CMakeFiles/VendingMachine.dir/ReadyState.cpp.i

CMakeFiles/VendingMachine.dir/ReadyState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/ReadyState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/ReadyState.cpp -o CMakeFiles/VendingMachine.dir/ReadyState.cpp.s

CMakeFiles/VendingMachine.dir/DispenseState.cpp.o: CMakeFiles/VendingMachine.dir/flags.make
CMakeFiles/VendingMachine.dir/DispenseState.cpp.o: ../DispenseState.cpp
CMakeFiles/VendingMachine.dir/DispenseState.cpp.o: CMakeFiles/VendingMachine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/VendingMachine.dir/DispenseState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VendingMachine.dir/DispenseState.cpp.o -MF CMakeFiles/VendingMachine.dir/DispenseState.cpp.o.d -o CMakeFiles/VendingMachine.dir/DispenseState.cpp.o -c /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/DispenseState.cpp

CMakeFiles/VendingMachine.dir/DispenseState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VendingMachine.dir/DispenseState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/DispenseState.cpp > CMakeFiles/VendingMachine.dir/DispenseState.cpp.i

CMakeFiles/VendingMachine.dir/DispenseState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VendingMachine.dir/DispenseState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/DispenseState.cpp -o CMakeFiles/VendingMachine.dir/DispenseState.cpp.s

# Object files for target VendingMachine
VendingMachine_OBJECTS = \
"CMakeFiles/VendingMachine.dir/Main.cpp.o" \
"CMakeFiles/VendingMachine.dir/Product.cpp.o" \
"CMakeFiles/VendingMachine.dir/ProductManager.cpp.o" \
"CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o" \
"CMakeFiles/VendingMachine.dir/IdleState.cpp.o" \
"CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o" \
"CMakeFiles/VendingMachine.dir/ReadyState.cpp.o" \
"CMakeFiles/VendingMachine.dir/DispenseState.cpp.o"

# External object files for target VendingMachine
VendingMachine_EXTERNAL_OBJECTS =

VendingMachine: CMakeFiles/VendingMachine.dir/Main.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/Product.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/ProductManager.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/VendingMachine.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/IdleState.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/ReturnChangeState.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/ReadyState.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/DispenseState.cpp.o
VendingMachine: CMakeFiles/VendingMachine.dir/build.make
VendingMachine: CMakeFiles/VendingMachine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable VendingMachine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VendingMachine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VendingMachine.dir/build: VendingMachine
.PHONY : CMakeFiles/VendingMachine.dir/build

CMakeFiles/VendingMachine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VendingMachine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VendingMachine.dir/clean

CMakeFiles/VendingMachine.dir/depend:
	cd /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build /mnt/d/Projects/LowLevelCodeDesign/MyImplementation/VendingMachine/build/CMakeFiles/VendingMachine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VendingMachine.dir/depend
