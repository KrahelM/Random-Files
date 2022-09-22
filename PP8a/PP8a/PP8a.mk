##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PP8a
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/User/Desktop/C1020/Workspaces/PP7
ProjectPath            :=C:/Users/User/Desktop/C1020/Workspaces/PP8a/PP8a
IntermediateDirectory  :=../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a
OutDir                 :=../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a
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
OutputFile             :=..\..\PP7\build-$(ConfigurationName)\bin\$(ProjectName)
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
Objects0=../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(ObjectSuffix) ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/.d $(Objects) 
	@if not exist "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a" mkdir "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a" mkdir "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a"
	@if not exist ""..\..\PP7\build-$(ConfigurationName)\bin"" mkdir ""..\..\PP7\build-$(ConfigurationName)\bin""

../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/.d:
	@if not exist "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a" mkdir "..\..\PP7\build-$(ConfigurationName)\__\PP8a\PP8a"

PreBuild:


##
## Objects
##
../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(ObjectSuffix): book.cpp ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP8a/PP8a/book.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/book.cpp$(ObjectSuffix) $(IncludePath)
../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(DependSuffix): book.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(ObjectSuffix) -MF../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(DependSuffix) -MM book.cpp

../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(PreprocessSuffix): book.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/book.cpp$(PreprocessSuffix) book.cpp

../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(ObjectSuffix): main.cpp ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/User/Desktop/C1020/Workspaces/PP8a/PP8a/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(ObjectSuffix) -MF../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(DependSuffix) -MM main.cpp

../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a/main.cpp$(PreprocessSuffix) main.cpp


-include ../../PP7/build-$(ConfigurationName)/__/PP8a/PP8a//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


