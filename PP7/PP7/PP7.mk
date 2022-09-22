##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PP7
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/User/Desktop/C1020/Workspaces/PP7
ProjectPath            :=C:/Users/User/Desktop/C1020/Workspaces/PP7/PP7
IntermediateDirectory  :=../build-$(ConfigurationName)/PP7
OutDir                 :=../build-$(ConfigurationName)/PP7
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=User
Date                   :=21/10/2021
CodeLitePath           :=C:/CodeLite
LinkerName             :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe
SharedObjectLinkerName :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/ar.exe rcu
CXX      := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe
CC       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\CodeLite
Objects0=../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PP7/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PP7" mkdir "..\build-$(ConfigurationName)\PP7"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PP7" mkdir "..\build-$(ConfigurationName)\PP7"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PP7/.d:
	@if not exist "..\build-$(ConfigurationName)\PP7" mkdir "..\build-$(ConfigurationName)\PP7"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(ObjectSuffix): ../pp8a/book.cpp ../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP7/pp8a/book.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_pp8a_book.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(DependSuffix): ../pp8a/book.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(DependSuffix) -MM ../pp8a/book.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(PreprocessSuffix): ../pp8a/book.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP7/up_pp8a_book.cpp$(PreprocessSuffix) ../pp8a/book.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(ObjectSuffix): ../pp8a/linkedlist.cpp ../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP7/pp8a/linkedlist.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_pp8a_linkedlist.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(DependSuffix): ../pp8a/linkedlist.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(DependSuffix) -MM ../pp8a/linkedlist.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(PreprocessSuffix): ../pp8a/linkedlist.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP7/up_pp8a_linkedlist.cpp$(PreprocessSuffix) ../pp8a/linkedlist.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(ObjectSuffix): ../pp8a/main.cpp ../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP7/pp8a/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_pp8a_main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(DependSuffix): ../pp8a/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(DependSuffix) -MM ../pp8a/main.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(PreprocessSuffix): ../pp8a/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP7/up_pp8a_main.cpp$(PreprocessSuffix) ../pp8a/main.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(ObjectSuffix): ../pp8a/node.cpp ../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP7/pp8a/node.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_pp8a_node.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(DependSuffix): ../pp8a/node.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(DependSuffix) -MM ../pp8a/node.cpp

../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(PreprocessSuffix): ../pp8a/node.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP7/up_pp8a_node.cpp$(PreprocessSuffix) ../pp8a/node.cpp


-include ../build-$(ConfigurationName)/PP7//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


