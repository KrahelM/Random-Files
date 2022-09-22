##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=C1020a12Lab4
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/User/Desktop/C1020/C1020a12Lab4/C1020a12Lab4
ProjectPath            :=C:/Users/User/Desktop/C1020/C1020a12Lab4/C1020a12Lab4/C1020a12Lab4
IntermediateDirectory  :=../build-$(ConfigurationName)/C1020a12Lab4
OutDir                 :=../build-$(ConfigurationName)/C1020a12Lab4
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=User
Date                   :=01/12/2021
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
Objects0=../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/C1020a12Lab4/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\C1020a12Lab4" mkdir "..\build-$(ConfigurationName)\C1020a12Lab4"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\C1020a12Lab4" mkdir "..\build-$(ConfigurationName)\C1020a12Lab4"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/C1020a12Lab4/.d:
	@if not exist "..\build-$(ConfigurationName)\C1020a12Lab4" mkdir "..\build-$(ConfigurationName)\C1020a12Lab4"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(ObjectSuffix): big5assessment.cpp ../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/C1020a12Lab4/C1020a12Lab4/C1020a12Lab4/big5assessment.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/big5assessment.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(DependSuffix): big5assessment.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(DependSuffix) -MM big5assessment.cpp

../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(PreprocessSuffix): big5assessment.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/C1020a12Lab4/big5assessment.cpp$(PreprocessSuffix) big5assessment.cpp

../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/C1020a12Lab4/C1020a12Lab4/C1020a12Lab4/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/C1020a12Lab4/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/C1020a12Lab4//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


