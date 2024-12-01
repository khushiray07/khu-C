import random
import urllib.request 

def download_web_image():
    name=random.randrange(1,1000)
    full_name=str(name)+".jpg"
    urllib.request.urlretrieved(url,full_name)

doenload_web_image()    