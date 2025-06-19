# shallow copy 

import copy

original = [[1, 2], [3, 4]]
shallow = copy.copy(original)

shallow[0][0] = 100
print(original)  # [[100, 2], [3, 4]]  ← original changed!


# deep copy 
deep = copy.deepcopy(original)

deep[0][0] = 200
print(original)  # [[100, 2], [3, 4]] ← no change!
print(deep)      # [[200, 2], [3, 4]]

