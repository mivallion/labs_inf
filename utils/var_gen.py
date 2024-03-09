import random
import sys

if __name__ == '__main__':
    n = int(sys.argv[1])
    variants_file = sys.argv[2]
    with open(variants_file) as f:
        lines = f.read().splitlines()
    variants = []
    for line in lines:
        variants.append(int(line))

    for _ in range(1, n + 1):
        variant = random.choice(variants)
        variants.remove(variant)
        print(variant)
