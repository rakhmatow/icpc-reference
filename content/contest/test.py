import subprocess as sp, sys
l = sys.argv[1]
for b in open(f"{l}.tests").read().strip().split("\n\n\n\n"):
	i, o = b.split("\n---\n")
	r = sp.run(f"cmake-build-debug/{l}.exe", input=i, text=True, capture_output=True).stdout
	print("Pass" if [i.strip() for i in o.splitlines()] == [i.strip() for i in r.splitlines()] else f"Fail:\n{i}\n->\n{r}\nExpected:\n{o}\n")