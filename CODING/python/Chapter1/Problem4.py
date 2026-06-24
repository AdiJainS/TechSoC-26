import os

# Specify the directory path
directory_path = '/chess'

try:
    # List all entries in the specified directory
    entries = os.listdir(directory_path)
    print("Directory contents:", entries)
except FileNotFoundError:
    print(f"Error: The directory '{directory_path}' does not exist.")
except PermissionError:
    print(f"Error: Permission denied to access the directory '{directory_path}'.")
except OSError as error:
    print(f"Error: An OS error occurred: {error}")

 