import subprocess,pathlib,sys


base_path = pathlib.Path()

add = ['git','add','C:/projects/Beginning-Cpp-by-Making-Games']
commit = ['git','commit','-m','update']
push = ['git','push']

subprocess.run(add)
subprocess.run(commit)
subprocess.run(push)
sys('cls')