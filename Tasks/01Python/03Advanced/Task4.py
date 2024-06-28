# Write a Python program to get the command-line arguments
import sys


print(f"Total arguments: {len(sys.argv)}")

for i, arg in enumerate(sys.argv):
    print(f"Argument {i}: {arg}")
