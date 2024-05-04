#Flip an image 180 degrees
import os
from PIL import Image



try:
    img = Image.open('Untitled.jpeg')
    # Perform operations with the image
except Exception as e:
    print("An error occurred:", e)
img = Image.open('Untitled.jpeg')

# flip horizontal
flip_img = img.transpose(Image.FLIP_LEFT_RIGHT)

flip_img.show()

