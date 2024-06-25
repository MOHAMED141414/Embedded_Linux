import requests
var=requests.get("https://api.ipify.org/?format=json")
ip=var.json()["ip"]
print(ip)
var2=requests.get("https://ipinfo.io/"+ip+"/geo").json()
print(var2)