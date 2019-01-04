@echo off

echo. ********************
echo. *Setup Dependencies*
echo. ********************

if not exist .\External\vcpkg\bootstrap-vcpkg.bat (
	git submodule update --init --recursive
	call .\External\vcpkg\bootstrap-vcpkg.bat
)

cd .\External\vcpkg\

vcpkg install glslang glm opencv[*] --triplet x64-windows

pause