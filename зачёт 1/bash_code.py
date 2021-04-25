#     Удаление всех синонимов указанного файла из указанного каталога и его поддиректорий. 

import os,glob,fnmatch
print("Enter name of file:")
name_of_file = input()
while ((name_of_file == "?")  or ( name_of_file == "" )):
    print("Error,please enter a name of file")
    print("Enter name of file:")
    name_of_file = input()
print("Enter the adress of directory(enter \".\" for current directory):")
start_directory = input()
while(start_directory == ""):
    print("Error,please enter the adress of directory")
    print("Enter the adress of directory(enter \".\" for current directory):")
    start_directory = input()
matches = []
for root, dirnames, filenames in os.walk(start_directory):
    for filename in fnmatch.filter(filenames, name_of_file):
        matches.append(os.path.join(root, filename))
size = len(matches)
for i in range(0,size,1):
    os.remove(matches[i])
print("Finished succesfully!")
