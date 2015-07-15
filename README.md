# hng
hash name generator, provides fast and efficient result


##example

```c++
void hnp()
{
    std::string name;
    GET_PROP_NAME(540021153, name); //hash for "v_prop_floatcandle"; you can convert the hash to string using, to_string function
    printf("Hash Name: %s", name.c_str()); //will generate an output as, "v_prop_floatcandle"
}
```
