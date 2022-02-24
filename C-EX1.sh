echo "enter filename :"
read file

if [[ -f "$file"]]
then
    echo"$file exists."
    echo"compiling $file .."
    gcc $file -o $filename

fi
else;
    if [[ ! -f $file]]
    then
        echo "file does not exist."
    fi
# or try equqting file to filename directly
#file = C-Ex1.c
