from PIL import Image, ImageDraw
from jutge import read

n = read(int)

numeros = []
colors = []

for i in range(0,n):
	x = read(int)
	numeros += [x]
	s = read(str)
	colors += [s]

img = Image.new('RGB', (sum(x), max(x)), 'Black')
dib = ImageDraw.Draw(img)

cosa = 0

for i in range(0,n):
	dib.ellipse([cosa, (max(numeros))/2-(numeros[i])/2, (max(numeros)/2)+(numeros[i])/2, cosa], colors[i])
	cosa += nums[i]
img.save('output.png') 