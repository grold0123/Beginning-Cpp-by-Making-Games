import subprocess,pathlib,os


base_path = pathlib.Path()

args = [
    ('adding',['git','add','C:/projects/Beginning-Cpp-by-Making-Games']),#add
    ('committing',['git','commit','-m','update']),#commit
    ('pushing',['git','push']),#push
]

os.system('cls')
print('\n\nUpdating repository\n\n')
for msg,arg in args:
    print('\n\n')
    subprocess.run(arg)
    print(f'\n\n{msg} succesful\n\n')
print('\n\nRepository successfully updated\n\n')