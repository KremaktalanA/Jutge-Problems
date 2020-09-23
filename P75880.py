from PIL import Image, ImageDraw
from jutge import read
def rect(x1, y1, x2, y2, col):
    dib.polygon([(x1, y1), (x2, y1), (x2, y2), (x1, y2)], col)

n = read(int)
x = read(int)
y = read(int)
z = read(int)

img = Image.new('RGB', (n, n), 'Black')
dib = ImageDraw.Draw(img)

rect(asu)

i = 0

