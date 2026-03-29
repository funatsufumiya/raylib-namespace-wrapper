# Minimal vcpkg-only build (project-root vcpkg)

1) Clone & bootstrap vcpkg (in project root):

```powershell
git clone https://github.com/microsoft/vcpkg.git vcpkg
.\vcpkg\bootstrap-vcpkg.bat
```

2) Install raylib (x64):

```powershell
.\vcpkg\vcpkg.exe install raylib:x64-windows
.\vcpkg\vcpkg.exe install glfw3:x64-windows-static
```

3) Configure & build (uses `./vcpkg/scripts/buildsystems/vcpkg.cmake`):

```powershell
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE=.\vcpkg\scripts\buildsystems\vcpkg.cmake
```