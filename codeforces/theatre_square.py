import re
path = input()
result_path = re.sub(r'/+', '/', path).rstrip("/")
if result_path == "":
    print("/")
else:
    print(result_path)