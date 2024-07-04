import socket
import threading

# Function to receive messages from the server
def receive_messages():
    while True:
        try:
            message = client_socket.recv(1024)
            if message:
                print(message.decode('utf-8'))
        except:
            # If receiving fails, assume server disconnected
            print("[INFO] Connection to server closed.")
            break

# Server configuration
SERVER_HOST = '127.0.0.20'  # Localhost
SERVER_PORT = 12345        # Port used by the server

# Create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to the server
client_socket.connect((SERVER_HOST, SERVER_PORT))
print(f"[INFO] Connected to {SERVER_HOST}:{SERVER_PORT}")

# Start a thread to receive messages from the server
receive_thread = threading.Thread(target=receive_messages)
receive_thread.start()

# Send messages to the server
while True:
    message = input("Type your message: ")
    if message.lower() == 'exit':
        break
    client_socket.sendall(message.encode('utf-8'))

# Close the connection
client_socket.close()
print("[INFO] Connection to server closed.")
