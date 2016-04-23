mkdir build
cd build

set CMAKE_FLAGS=-DCMAKE_INSTALL_PREFIX=%PREFIX%
set CMAKE_FLAGS=%CMAKE_FLAGS% -DSWIG_DIR=C:\DEV\swigwin-3.0.8
set CMAKE_FLAGS=%CMAKE_FLAGS% -DSWIG_EXECUTABLE=C:\dev\swigwin-3.0.8\swig.exe
set CMAKE_FLAGS=%CMAKE_FLAGS% -DNUMPY_SWIG_DIR=C:\dev\pyvulkan\numpy_swig\
set CMAKE_FLAGS=%CMAKE_FLAGS% -DCMAKE_BUILD_TYPE=Release
set CMAKE_FLAGS=%CMAKE_FLAGS% -DVULKAN_INCLUDE_DIR=C:\dev\Vulkan-Docs\src
set CMAKE_FLAGS=%CMAKE_FLAGS% -DVULKAN_LIB_DIR=c:/VulkanSDK/1.0.5.0/Bin

cmake -G %CMAKE_GENERATOR% %CMAKE_FLAGS% ..

set CMAKE_CONFIG="Release"
cmake --build . --config %CMAKE_CONFIG% --target _pyvulkan

xcopy "Release\_pyvulkan.pyd" "%SP_DIR%"
xcopy "pyvulkan.py" "%SP_DIR%"

if errorlevel 1 exit 1

:: Add more build steps here, if they are necessary.

:: See
:: http://docs.continuum.io/conda/build.html
:: for a list of environment variables that are set during the build process.
