import subprocess,pathlib,os


base_path = pathlib.Path()

args = [
    ['git','add','C:/projects/Beginning-Cpp-by-Making-Games'],#add
    ['git','commit','-m','update'],#commit
    ['git','push'],#push
]

os.system('cls')
print('\n\nUpdating repository\n\n')
for arg in args:
    print('\n\n')
    subprocess.run(arg)
    print('\n\nsuccesful\n\n')
print('\n\nRepository successfully updated\n\n')