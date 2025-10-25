import subprocess,sys,os
from pathlib import Path

workingdir = Path(r'C:\projects\Beginning-Cpp-by-Making-Games')
src_dir = workingdir/'src'
build_dir = workingdir/"build"
project_name = sys.argv[1]
project_src_dir = src_dir/project_name
project_build_dir = build_dir/project_name

cpp_files = [str(cpp_file) for cpp_file in project_src_dir.iterdir()]

executable_file = str(project_build_dir/"main.exe")

os.system("cls")
print("\n\nBuilding",project_name)
result = subprocess.run([
    'g++',*cpp_files,
    '-I',str(src_dir),
    '-o',executable_file
    ]
)

if result.returncode != 0:
    print('\n\nBuild not successful\n\n')
else:
    print('\n\nStarting:',project_name)
    print('\n\n')
    subprocess.run([executable_file])
    
