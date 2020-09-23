from PIL import Image, ImageDraw

def rect(x1, y1, x2, y2, col):
    dib.polygon([(x1, y1), (x2, y1), (x2, y2), (x1, y2)], col)

c1 = str(input())
c2 = str(input())
c3 = str(input())

img = Image.new('RGB', (350, 350), 'White')
dib = ImageDraw.Draw(img)




image.save('output.png')