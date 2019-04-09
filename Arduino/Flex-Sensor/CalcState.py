# Kóðar fyrir putta
handCodes = [1,2,4,8]

# Values af puttunum
handState = [225, 201, 104, 230]

# Skilgreina hvenær putti er "niðri"
limit = 128

# Summa
sm = 0

for i in range(4):
    if handState[i] > limit:
        sm += handCodes[i]
print(sm)

