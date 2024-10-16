from sys import stdin, stdout

class Place:
    def __init__(self, name):
        self.name = name
        self.animals = {}
        
p_dict = {}

for i, s in enumerate(stdin):
    if i == 0 or s == "": continue
    a, c, p = s.split()
    
    if p not in p_dict.keys():
        p_dict[p] = Place(p)
        
    if a not in p_dict[p].animals:
        p_dict[p].animals[a] = 0
        
    p_dict[p].animals[a] += int(c)
    
for p in p_dict.values():
    s = []
    for a, c in p.animals.items():
        s.append(f'{a} {c}')
    stdout.write(p.name + ":" + ",".join(s) + "\n")