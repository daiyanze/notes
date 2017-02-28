from PIL import Image, ImageFilter, ImageFont, ImageDraw
import random


image = Image.open('test.jpeg')

w, h = image.size

# print('Original image size: %sx%s' % (w, h))

# image_blur = image.filter(ImageFilter.BLUR)
# image_blur.save('blur.jpeg', 'jpeg')
# print('Blurry image: blur.jpeg')


# image.thumbnail((w//2, h//2))
# image.save('thumbnail.jpeg', 'jpeg')
# print('Resize image to: %sx%s' % (w//2, h//2))

def rndChar():
	return chr(random.randint(65,90))

def rndColor1():
	return (random.randint(64,255),random.randint(64,255),random.randint(64,255))

def rndColor2():
	return (random.randint(32,127),random.randint(32,127),random.randint(32,127))

width = 60*6
height = 60
base_img = Image.new('RGB',(width,height),(255,255,255))
font = ImageFont.truetype('arial.ttf', 42)
draw = ImageDraw.Draw(base_img)

for x in range(width):
	for y in range(height):
		draw.point((x,y), fill=rndColor1())

for n in range(6):
	draw.text((60*n+10,10), rndChar(), font=font, fill=rndColor2())

new_img = base_img.filter(ImageFilter.BLUR)
new_img.save('testify.jpeg', 'jpeg')