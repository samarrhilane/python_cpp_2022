# python_cpp
Exemple d'utilisation d'un composant en python
Utilise pybind11
apres git clone, faire:

we will use linux on GCP ==> check https://github.com/samarrhilane/lib_partageable_linux_2022

# 1 - pybind11

```
cd python_cpp_2022
git submodule init
git submodule update
```

![submodule3](https://user-images.githubusercontent.com/29365707/166983024-d4922309-6059-4407-a7fd-e348592cc3cd.png)


# 2 - Compile 

```
cd hello
make
```
## 2.1 - If an issue is found :

![error make](https://user-images.githubusercontent.com/29365707/166952464-0b512c02-b926-4fb1-8fac-e2e7b9d7a9ec.png)

==> Solution 
Change Makefile : change python version 

![6_change mafe file](https://user-images.githubusercontent.com/29365707/166952974-9ac83f78-3e8b-402d-93c7-72c8eb365b5f.png)
a

## 2.2 make result 

![make result 1](https://user-images.githubusercontent.com/29365707/166954445-8cbb5b96-354b-4977-88e1-ea08fe815cf6.png)




# 3 - Use 
```
python3
>>> import hello_component
>>> hello_component.greet()
'hello, world'
>>> hello_component.getVersion()
'1.0'
>>> 
```

![hello](https://user-images.githubusercontent.com/29365707/167022802-186f32f4-170f-4724-807d-235180027c69.png)


