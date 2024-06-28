'''
Using “Pyautogui” 
to open Emails and change
Emails from unread toread
 '''

from time import sleep
import pyautogui

# sleep(10)
# p=pyautogui.position()
# print(p)



def open_and_mark_emails(num_emails):
    # Click to focus on the browser window
    pyautogui.click(34, 73)  
    sleep(2)

    # Click on the first email
    for i in range(num_emails):
        
        pyautogui.moveTo(576, 374)  
        pyautogui.click()
        sleep(3)
        #back on the main emails
        pyautogui.moveTo(94, 100)  
        pyautogui.click()
        sleep(3)
        #scroll
        pyautogui.moveTo(1841, 349)  
        pyautogui.scroll(-1)  
        sleep(1)        

    print(f"{num_emails} emails marked as read.")

num=int(input("Please Enter num of emails to want to read:"))
open_and_mark_emails(num)
