# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\CPrctc\C Graphs"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\CPrctc\C Graphs\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\GraphMatrix.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\GraphMatrix.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\GraphMatrix.dir\flags.make

CMakeFiles\GraphMatrix.dir\main.c.obj: CMakeFiles\GraphMatrix.dir\flags.make
CMakeFiles\GraphMatrix.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GraphMatrix.dir/main.c.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\GraphMatrix.dir\main.c.obj /FdCMakeFiles\GraphMatrix.dir\ /FS -c "D:\CPrctc\C Graphs\main.c"
<<

CMakeFiles\GraphMatrix.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GraphMatrix.dir/main.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\GraphMatrix.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\CPrctc\C Graphs\main.c"
<<

CMakeFiles\GraphMatrix.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GraphMatrix.dir/main.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\GraphMatrix.dir\main.c.s /c "D:\CPrctc\C Graphs\main.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrix.c.obj: CMakeFiles\GraphMatrix.dir\flags.make
CMakeFiles\GraphMatrix.dir\graphs\matrix.c.obj: ..\graphs\matrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/GraphMatrix.dir/graphs/matrix.c.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\GraphMatrix.dir\graphs\matrix.c.obj /FdCMakeFiles\GraphMatrix.dir\ /FS -c "D:\CPrctc\C Graphs\graphs\matrix.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GraphMatrix.dir/graphs/matrix.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\GraphMatrix.dir\graphs\matrix.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\CPrctc\C Graphs\graphs\matrix.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GraphMatrix.dir/graphs/matrix.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\GraphMatrix.dir\graphs\matrix.c.s /c "D:\CPrctc\C Graphs\graphs\matrix.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.obj: CMakeFiles\GraphMatrix.dir\flags.make
CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.obj: ..\graphs\matrixgraph.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/GraphMatrix.dir/graphs/matrixgraph.c.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.obj /FdCMakeFiles\GraphMatrix.dir\ /FS -c "D:\CPrctc\C Graphs\graphs\matrixgraph.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GraphMatrix.dir/graphs/matrixgraph.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\CPrctc\C Graphs\graphs\matrixgraph.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GraphMatrix.dir/graphs/matrixgraph.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.s /c "D:\CPrctc\C Graphs\graphs\matrixgraph.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\tools.c.obj: CMakeFiles\GraphMatrix.dir\flags.make
CMakeFiles\GraphMatrix.dir\graphs\tools.c.obj: ..\graphs\tools.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/GraphMatrix.dir/graphs/tools.c.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\GraphMatrix.dir\graphs\tools.c.obj /FdCMakeFiles\GraphMatrix.dir\ /FS -c "D:\CPrctc\C Graphs\graphs\tools.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\tools.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GraphMatrix.dir/graphs/tools.c.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe > CMakeFiles\GraphMatrix.dir\graphs\tools.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\CPrctc\C Graphs\graphs\tools.c"
<<

CMakeFiles\GraphMatrix.dir\graphs\tools.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GraphMatrix.dir/graphs/tools.c.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\GraphMatrix.dir\graphs\tools.c.s /c "D:\CPrctc\C Graphs\graphs\tools.c"
<<

# Object files for target GraphMatrix
GraphMatrix_OBJECTS = \
"CMakeFiles\GraphMatrix.dir\main.c.obj" \
"CMakeFiles\GraphMatrix.dir\graphs\matrix.c.obj" \
"CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.obj" \
"CMakeFiles\GraphMatrix.dir\graphs\tools.c.obj"

# External object files for target GraphMatrix
GraphMatrix_EXTERNAL_OBJECTS =

GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\main.c.obj
GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\graphs\matrix.c.obj
GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\graphs\matrixgraph.c.obj
GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\graphs\tools.c.obj
GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\build.make
GraphMatrix.exe: CMakeFiles\GraphMatrix.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable GraphMatrix.exe"
	"D:\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\GraphMatrix.dir --rc="D:\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="D:\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1424~1.283\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\GraphMatrix.dir\objects1.rsp @<<
 /out:GraphMatrix.exe /implib:GraphMatrix.lib /pdb:"D:\CPrctc\C Graphs\cmake-build-debug\GraphMatrix.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\GraphMatrix.dir\build: GraphMatrix.exe

.PHONY : CMakeFiles\GraphMatrix.dir\build

CMakeFiles\GraphMatrix.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GraphMatrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles\GraphMatrix.dir\clean

CMakeFiles\GraphMatrix.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\CPrctc\C Graphs" "D:\CPrctc\C Graphs" "D:\CPrctc\C Graphs\cmake-build-debug" "D:\CPrctc\C Graphs\cmake-build-debug" "D:\CPrctc\C Graphs\cmake-build-debug\CMakeFiles\GraphMatrix.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\GraphMatrix.dir\depend

