import os 

reg_bit = 8
reg_val = "0b"
#func to take input from user
def Input():
    global reg_val
    for i in range(reg_bit):
        bit_value = input(f"Please Enter Bit {i} Mode : ")
        if bit_value.lower() == "in":
           reg_val+="0"
        elif bit_value.lower() == "out":
           reg_val+="1"
        else:
            print("Wrong input default value: in")
            reg_val+="0"

#func to create the file
def file():
    global reg_val
    with open(os.path.join(os.getcwd()+"/GPIO.c"),'w') as i_file:
        i_file.write("void Init_PORTA_DIR (void)\n{\n\
        DDRA = "+reg_val+";\n\
                        }")
        i_file.close()

Input()
file()