##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PP9b
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/User/Desktop/C1020/Workspaces/PP9
ProjectPath            :=C:/Users/User/Desktop/C1020/Workspaces/PP9/PP9b
IntermediateDirectory  :=../build-$(ConfigurationName)/PP9b
OutDir                 :=../build-$(ConfigurationName)/PP9b
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=User
Date                   :=26/10/2021
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
Objects0=../build-$(ConfigurationName)/PP9b/book.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PP9b/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PP9b/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PP9b" mkdir "..\build-$(ConfigurationName)\PP9b"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PP9b" mkdir "..\build-$(ConfigurationName)\PP9b"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PP9b/.d:
	@if not exist "..\build-$(ConfigurationName)\PP9b" mkdir "..\build-$(ConfigurationName)\PP9b"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PP9b/book.cpp$(ObjectSuffix): book.cpp ../build-$(ConfigurationName)/PP9b/book.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP9/PP9b/book.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/book.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP9b/book.cpp$(DependSuffix): book.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP9b/book.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP9b/book.cpp$(DependSuffix) -MM book.cpp

../build-$(ConfigurationName)/PP9b/book.cpp$(PreprocessSuffix): book.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP9b/book.cpp$(PreprocessSuffix) book.cpp

../build-$(ConfigurationName)/PP9b/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PP9b/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP9/PP9b/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP9b/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP9b/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP9b/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PP9b/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP9b/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/PP9b//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


