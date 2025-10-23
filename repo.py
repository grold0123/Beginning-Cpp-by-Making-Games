import subprocess,pathlib,os


base_path = pathlib.Path()

add = ['git','add','C:/projects/Beginning-Cpp-by-Making-Games']
commit = ['git','commit','-m','update']
push = ['git','push']

os.system('cls')
print('\n\nUpdating repository\n\n')
subprocess.run(add)
subprocess.run(commit)
subprocess.run(push)
os.system('cls')
print('\n\nRepository updated\n\n')