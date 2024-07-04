import tkinter as tk
from tkinter import messagebox

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)

def Calc_Factorial():
    try:
        
        number = int(enter.get())
        result = factorial(number)

        
        messagebox.showinfo("Factorial Result", f"The factorial of {number} is {result}")

    except ValueError:
        messagebox.showerror("Error", "Please enter a valid integer.")


root = tk.Tk()
root.title("Factorial Calculator")


label = tk.Label(root, text="Enter an integer N:")
label.pack()

enter = tk.Entry(root)
enter.pack()

button = tk.Button(root, text="Result of Factorial", command=Calc_Factorial)
button.pack()

root.mainloop()