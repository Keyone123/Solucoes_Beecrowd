positivo = 0
media = 0
for i in range(6):
    num = float(input())
    if num > 0:
        positivo = positivo + 1
        media = media + num
print('{} valores positivos'.format(positivo))
if positivo == 0:
    print('-nan')
else:
    print('{:.1f}'.format(media/positivo))
