val = float(input())

print("NOTAS:")

d = int(val/100)
val = val - d * 100
print("{} nota(s) de R$ 100.00".format(d))

d = int(val/50)
val = val - d * 50
print("{} nota(s) de R$ 50.00".format(d))

d = int(val/20)
val = val - d * 20
print("{} nota(s) de R$ 20.00".format(d))

d = int(val/10)
val = val - d * 10
print("{} nota(s) de R$ 10.00".format(d))

d = int(val/5)
val = val - d * 5
print("{} nota(s) de R$ 5.00".format(d))

d = int(val/2)
val = val - d * 2
print("{} nota(s) de R$ 2.00".format(d))

print("MOEDAS:")

d = int(val/1)
val = val - d * 1
print("{} moeda(s) de R$ 1.00".format(d))

d = int(val/0.5)
val = val - d * 0.5
print("{} moeda(s) de R$ 0.50".format(d))

d = int(val/0.25)
val = val - d * 0.25
print("{} moeda(s) de R$ 0.25".format(d))

d = int(val/0.10)
val = val - d * 0.10
print("{} moeda(s) de R$ 0.10".format(d))

d = int(val/0.05)
val = val - d * 0.05
print("{} moeda(s) de R$ 0.05".format(d))

d = int(val/0.01)
print("{} moeda(s) de R$ 0.01".format(d))
