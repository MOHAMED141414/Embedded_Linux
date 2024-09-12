from flask import Flask, request, render_template
import socket

app = Flask(__name__)

def send_command(command):
    server_ip = '127.0.0.1'  # IP address of the C++ server
    server_port = 8081        # Port of the C++ server
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((server_ip, server_port))
        s.sendall(command.encode())

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/command', methods=['POST'])
def command():
    command = request.form['command']
    send_command(command)
    return f'Command "{command}" sent to server!'

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0', port=5000)  # Listen on all network interfaces
