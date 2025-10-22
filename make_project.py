
import sys,subprocess,pathlib

home_dir = pathlib.Path(r'C:\projects\Beginning-Cpp-by-Making-Games')
src_dir = home_dir/'src'
build_dir = home_dir/'build'

project_name = sys.argv[1]

project_src_dir = src_dir/project_name
project_build_dir = build_dir/project_name

project_src_dir.mkdir(exist_ok=True)
project_build_dir.mkdir(exist_ok=True)
main_cpp = project_src_dir/'main.cpp'
main_cpp.touch(exist_ok=True)
with open (main_cpp,'w') as file:
    main = 'int '+'main'+' ()'+' {\nstd::cout<< "Hello world" << std::endl;\n}'
    file.write(f'/{"*"*50}\n{project_name}\n\n{"*"*50}/\n')
    file.write('#include<iostream>\n')
    file.write('#include<cstdlib>\n')
    file.write('using namespace std;\n\n')
    file.write(main)

subprocess.run(['code',main_cpp])