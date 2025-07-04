# First, get your server running
# test_server.py
import http.server
import socketserver

PORT = 8000
Handler = http.server.SimpleHTTPRequestHandler

print(f"Server at http://localhost:{PORT}/calc.bin")
with socketserver.TCPServer(("", PORT), Handler) as httpd:
    httpd.serve_forever()