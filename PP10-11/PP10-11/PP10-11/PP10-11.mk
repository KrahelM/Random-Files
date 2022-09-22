##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PP10-11
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/User/Desktop/C1020/PP10-11/PP10-11
ProjectPath            :=C:/Users/User/Desktop/C1020/PP10-11/PP10-11/PP10-11
IntermediateDirectory  :=../build-$(ConfigurationName)/PP10-11
OutDir                 :=../build-$(ConfigurationName)/PP10-11
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=User
Date                   :=08/11/2021
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
Objects0=../build-$(ConfigurationName)/PP10-11/book.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PP10-11/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PP10-11/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PP10-11" mkdir "..\build-$(ConfigurationName)\PP10-11"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PP10-11" mkdir "..\build-$(ConfigurationName)\PP10-11"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PP10-11/.d:
	@if not exist "..\build-$(ConfigurationName)\PP10-11" mkdir "..\build-$(ConfigurationName)\PP10-11"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PP10-11/book.cpp$(ObjectSuffix): book.cpp ../build-$(ConfigurationName)/PP10-11/book.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/PP10-11/PP10-11/PP10-11/book.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/book.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP10-11/book.cpp$(DependSuffix): book.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP10-11/book.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP10-11/book.cpp$(DependSuffix) -MM book.cpp

../build-$(ConfigurationName)/PP10-11/book.cpp$(PreprocessSuffix): book.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP10-11/book.cpp$(PreprocessSuffix) book.cpp

../build-$(ConfigurationName)/PP10-11/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PP10-11/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/PP10-11/PP10-11/PP10-11/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PP10-11/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PP10-11/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PP10-11/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PP10-11/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PP10-11/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/PP10-11//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


