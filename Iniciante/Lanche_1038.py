codigo, quantidade = [int(x) for x in input(). strip().split(" ")]

preco = [4.00, 4.50, 5.00, 2.00, 1.50]

total = quantidade * preco[codigo - 1]

print("Total: R$ {:.2f}".format(total))
