import tkinter as tk


def send_signal(signal):
    
    if signal == 'on':
        root.configure(bg='red') 
    elif signal == 'off':
        root.configure(bg='white')  

root = tk.Tk()
root.title("LED")

button_on = tk.Button(root, text="on", bg="red", fg="white", padx=20, pady=10,command=lambda: send_signal('on'))
button_off = tk.Button(root, text="off", bg="white", padx=20, pady=10,command=lambda: send_signal('off'))

button_on.pack(padx=20, pady=10)
button_off.pack(padx=20, pady=10)

root.mainloop()
