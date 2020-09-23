from PIL import Image, ImageDraw

c1 = str(input())
c2 = str(input())
r = int(input())
v1 = float(input())
v2 = float(input())

img = Image.new('RGB', (801, 801), 'White')
dib = ImageDraw.Draw(img)

dib.point((1,1),c2)

img.save('output.png')