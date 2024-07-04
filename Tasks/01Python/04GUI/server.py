import socket
import threading

# Function to handle each client connection
def handle_client(client_socket, address):
    print(f"[INFO] Accepted connection from {address}")

    try:
        while True:
            # Receive data from the client
            data = client_socket.recv(1024)
            if not data:
                break
            print(f"[{address}] {data.decode('utf-8')}")

            # Echo back the received data to the client
            client_socket.sendall(data)
    except Exception as e:
        print(f"[ERROR] Exception occurred with {address}: {str(e)}")
    finally:
        # Close the connection
        print(f"[INFO] Connection from {address} closed.")
        client_socket.close()

# Server configuration
HOST = '127.0.0.20'  # Localhost
PORT = 12345        # Port to listen on

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind the socket to the host and port
server_socket.bind((HOST, PORT))

# Enable server to accept connections
server_socket.listen(5)
print(f"[INFO] Server listening on {HOST}:{PORT}")

# Main server loop to accept incoming connections
while True:
    # Accept a connection from a client
    client_socket, address = server_socket.accept()

    # Create a new thread to handle the client
    client_thread = threading.Thread(target=handle_client, args=(client_socket, address))
    client_thread.start()
