# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = C:\develop\CMake\bin\cmake.exe

# The command to remove a file.
RM = C:\develop\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\ZhangYiRong\projs\todone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\ZhangYiRong\projs\todone\build

# Include any dependencies generated for this target.
include CMakeFiles/todone.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/todone.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/todone.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/todone.dir/flags.make

todone_autogen/timestamp: C:/develop/Qt/6.8.2/mingw_64/bin/moc.exe
todone_autogen/timestamp: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target todone"
	C:\develop\CMake\bin\cmake.exe -E cmake_autogen C:/ZhangYiRong/projs/todone/build/CMakeFiles/todone_autogen.dir/AutogenInfo.json ""
	C:\develop\CMake\bin\cmake.exe -E touch C:/ZhangYiRong/projs/todone/build/todone_autogen/timestamp

CMakeFiles/todone.dir/codegen:
.PHONY : CMakeFiles/todone.dir/codegen

CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj: todone_autogen/mocs_compilation.cpp
CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\todone.dir\todone_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\todone.dir\todone_autogen\mocs_compilation.cpp.obj -c C:\ZhangYiRong\projs\todone\build\todone_autogen\mocs_compilation.cpp

CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\build\todone_autogen\mocs_compilation.cpp > CMakeFiles\todone.dir\todone_autogen\mocs_compilation.cpp.i

CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\build\todone_autogen\mocs_compilation.cpp -o CMakeFiles\todone.dir\todone_autogen\mocs_compilation.cpp.s

CMakeFiles/todone.dir/res/res.rc.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/res/res.rc.obj: C:/ZhangYiRong/projs/todone/res/res.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building RC object CMakeFiles/todone.dir/res/res.rc.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\windres.exe -O coff $(RC_DEFINES) $(RC_INCLUDES) $(RC_FLAGS) C:\ZhangYiRong\projs\todone\res\res.rc CMakeFiles\todone.dir\res\res.rc.obj

CMakeFiles/todone.dir/src/main.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/main.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/main.cpp.obj: C:/ZhangYiRong/projs/todone/src/main.cpp
CMakeFiles/todone.dir/src/main.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/todone.dir/src/main.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/main.cpp.obj -MF CMakeFiles\todone.dir\src\main.cpp.obj.d -o CMakeFiles\todone.dir\src\main.cpp.obj -c C:\ZhangYiRong\projs\todone\src\main.cpp

CMakeFiles/todone.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/main.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\main.cpp > CMakeFiles\todone.dir\src\main.cpp.i

CMakeFiles/todone.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/main.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\main.cpp -o CMakeFiles\todone.dir\src\main.cpp.s

CMakeFiles/todone.dir/src/structure.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/structure.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/structure.cpp.obj: C:/ZhangYiRong/projs/todone/src/structure.cpp
CMakeFiles/todone.dir/src/structure.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/todone.dir/src/structure.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/structure.cpp.obj -MF CMakeFiles\todone.dir\src\structure.cpp.obj.d -o CMakeFiles\todone.dir\src\structure.cpp.obj -c C:\ZhangYiRong\projs\todone\src\structure.cpp

CMakeFiles/todone.dir/src/structure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/structure.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\structure.cpp > CMakeFiles\todone.dir\src\structure.cpp.i

CMakeFiles/todone.dir/src/structure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/structure.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\structure.cpp -o CMakeFiles\todone.dir\src\structure.cpp.s

CMakeFiles/todone.dir/src/todotablewidget.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/todotablewidget.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/todotablewidget.cpp.obj: C:/ZhangYiRong/projs/todone/src/todotablewidget.cpp
CMakeFiles/todone.dir/src/todotablewidget.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/todone.dir/src/todotablewidget.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/todotablewidget.cpp.obj -MF CMakeFiles\todone.dir\src\todotablewidget.cpp.obj.d -o CMakeFiles\todone.dir\src\todotablewidget.cpp.obj -c C:\ZhangYiRong\projs\todone\src\todotablewidget.cpp

CMakeFiles/todone.dir/src/todotablewidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/todotablewidget.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\todotablewidget.cpp > CMakeFiles\todone.dir\src\todotablewidget.cpp.i

CMakeFiles/todone.dir/src/todotablewidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/todotablewidget.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\todotablewidget.cpp -o CMakeFiles\todone.dir\src\todotablewidget.cpp.s

CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj: C:/ZhangYiRong/projs/todone/src/todaytreewidget.cpp
CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj -MF CMakeFiles\todone.dir\src\todaytreewidget.cpp.obj.d -o CMakeFiles\todone.dir\src\todaytreewidget.cpp.obj -c C:\ZhangYiRong\projs\todone\src\todaytreewidget.cpp

CMakeFiles/todone.dir/src/todaytreewidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/todaytreewidget.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\todaytreewidget.cpp > CMakeFiles\todone.dir\src\todaytreewidget.cpp.i

CMakeFiles/todone.dir/src/todaytreewidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/todaytreewidget.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\todaytreewidget.cpp -o CMakeFiles\todone.dir\src\todaytreewidget.cpp.s

CMakeFiles/todone.dir/src/recordtextedit.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/recordtextedit.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/recordtextedit.cpp.obj: C:/ZhangYiRong/projs/todone/src/recordtextedit.cpp
CMakeFiles/todone.dir/src/recordtextedit.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/todone.dir/src/recordtextedit.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/recordtextedit.cpp.obj -MF CMakeFiles\todone.dir\src\recordtextedit.cpp.obj.d -o CMakeFiles\todone.dir\src\recordtextedit.cpp.obj -c C:\ZhangYiRong\projs\todone\src\recordtextedit.cpp

CMakeFiles/todone.dir/src/recordtextedit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/recordtextedit.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\recordtextedit.cpp > CMakeFiles\todone.dir\src\recordtextedit.cpp.i

CMakeFiles/todone.dir/src/recordtextedit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/recordtextedit.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\recordtextedit.cpp -o CMakeFiles\todone.dir\src\recordtextedit.cpp.s

CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj: C:/ZhangYiRong/projs/todone/src/delegate/datatimedelegate.cpp
CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj -MF CMakeFiles\todone.dir\src\delegate\datatimedelegate.cpp.obj.d -o CMakeFiles\todone.dir\src\delegate\datatimedelegate.cpp.obj -c C:\ZhangYiRong\projs\todone\src\delegate\datatimedelegate.cpp

CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\delegate\datatimedelegate.cpp > CMakeFiles\todone.dir\src\delegate\datatimedelegate.cpp.i

CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\delegate\datatimedelegate.cpp -o CMakeFiles\todone.dir\src\delegate\datatimedelegate.cpp.s

CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj: CMakeFiles/todone.dir/flags.make
CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj: CMakeFiles/todone.dir/includes_CXX.rsp
CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj: C:/ZhangYiRong/projs/todone/src/delegate/prioritydelegate.cpp
CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj: CMakeFiles/todone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj -MF CMakeFiles\todone.dir\src\delegate\prioritydelegate.cpp.obj.d -o CMakeFiles\todone.dir\src\delegate\prioritydelegate.cpp.obj -c C:\ZhangYiRong\projs\todone\src\delegate\prioritydelegate.cpp

CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.i"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ZhangYiRong\projs\todone\src\delegate\prioritydelegate.cpp > CMakeFiles\todone.dir\src\delegate\prioritydelegate.cpp.i

CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.s"
	C:\develop\Qt\Tools\mingw1310_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ZhangYiRong\projs\todone\src\delegate\prioritydelegate.cpp -o CMakeFiles\todone.dir\src\delegate\prioritydelegate.cpp.s

# Object files for target todone
todone_OBJECTS = \
"CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/todone.dir/res/res.rc.obj" \
"CMakeFiles/todone.dir/src/main.cpp.obj" \
"CMakeFiles/todone.dir/src/structure.cpp.obj" \
"CMakeFiles/todone.dir/src/todotablewidget.cpp.obj" \
"CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj" \
"CMakeFiles/todone.dir/src/recordtextedit.cpp.obj" \
"CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj" \
"CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj"

# External object files for target todone
todone_EXTERNAL_OBJECTS =

todone.exe: CMakeFiles/todone.dir/todone_autogen/mocs_compilation.cpp.obj
todone.exe: CMakeFiles/todone.dir/res/res.rc.obj
todone.exe: CMakeFiles/todone.dir/src/main.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/structure.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/todotablewidget.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/todaytreewidget.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/recordtextedit.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/delegate/datatimedelegate.cpp.obj
todone.exe: CMakeFiles/todone.dir/src/delegate/prioritydelegate.cpp.obj
todone.exe: CMakeFiles/todone.dir/build.make
todone.exe: C:/develop/Qt/6.8.2/mingw_64/lib/libQt6Widgets.a
todone.exe: C:/develop/Qt/6.8.2/mingw_64/lib/libQt6Sql.a
todone.exe: C:/develop/Qt/6.8.2/mingw_64/lib/libQt6Gui.a
todone.exe: C:/develop/Qt/6.8.2/mingw_64/lib/libQt6Core.a
todone.exe: C:/develop/Qt/6.8.2/mingw_64/lib/libQt6EntryPoint.a
todone.exe: CMakeFiles/todone.dir/linkLibs.rsp
todone.exe: CMakeFiles/todone.dir/objects1.rsp
todone.exe: CMakeFiles/todone.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\ZhangYiRong\projs\todone\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable todone.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\todone.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/todone.dir/build: todone.exe
.PHONY : CMakeFiles/todone.dir/build

CMakeFiles/todone.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\todone.dir\cmake_clean.cmake
.PHONY : CMakeFiles/todone.dir/clean

CMakeFiles/todone.dir/depend: todone_autogen/timestamp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\ZhangYiRong\projs\todone C:\ZhangYiRong\projs\todone C:\ZhangYiRong\projs\todone\build C:\ZhangYiRong\projs\todone\build C:\ZhangYiRong\projs\todone\build\CMakeFiles\todone.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/todone.dir/depend

