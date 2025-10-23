import subprocess,sys
from pathlib import Path

workingdir = Path(r'C:\projects\Beginning-Cpp-by-Making-Games')
src_dir = workingdir/'src'
build_dir = workingdir/"build"
project_name = sys.argv[1]
project_src_dir = src_dir/project_name
project_build_dir = build_dir/project_name

cpp_files = [str(cpp_file) for cpp_file in project_src_dir.iterdir()]

executable_file = str(project_build_dir/"main.exe")

subprocess.run(['g++',*cpp_files,'-o',executable_file])
subprocess.run([executable_file])
