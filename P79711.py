from PIL import Image, ImageDraw

def rect(x1, y1, x2, y2, col):
    dib.polygon([(x1, y1), (x2, y1), (x2, y2), (x1, y2)], col)

n = int(input())
l = []
for i in range(0,n):
	s = str(input())
	l.append(s)

img = Image.new('RGB', (50*n, 50), 'White')
dib = ImageDraw.Draw(img)
c = 0
i = ""
for i in l:
	rect(c*50,0,(c*50-1)+50, 49, i)
	c += 1

img.save('output.png')
