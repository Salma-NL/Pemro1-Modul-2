pi = 3.142857

nilai = input().split()

if len(nilai) == 1:
    r = float(nilai[0])
    t = float(input())
else:
    r, t = map(float, nilai)

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")