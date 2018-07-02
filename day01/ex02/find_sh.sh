find . -name "*.sh" | sed "s/.sh$//g" | awk -F "/" '{print $NF}' 
