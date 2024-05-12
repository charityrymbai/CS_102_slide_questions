# Strings

## Unformatted Input and Output

- gets()<br>
  Syntax: if str is a string<br>

  ```
  gets(str);
  ```

- puts()<br>
  Syntax: if str is a string<br>

  ```
  puts(str);
  ```

## String Handling Functions

| Function |                                                        Action                                                        |
| -------- | :------------------------------------------------------------------------------------------------------------------: |
| strcat() |                      Concatenates Two strings<br> if s1,s2 are parameters,<br>s2 appended to s1                      |
| strcmp() | Compares two strings<br> if s1,s2 are parameters <br>- same returns 0 <br>- returns ASCII of diff char s1[i] - s2[i] |
| strcpy() |        Compies one string to another <br> if s1, s2 are parameters, <br> s2 copied to s1 so its like s1 = s2;        |
| strlen() |                                            Finds the length of the string                                            |

## Other String Functions

- strncpy() - only copies n characters<br>
  ```
  strncpy(s1,s2,n);
  ```
- strncmp() - only compares n characters<br>
  ```
  strcmp(s1,s2,n);
  ```
- strstr() - checks if there is a substring 'substr' in string 'str'<br>
  - returns first occurence of substring
  - or NULL if not found
  ```
  strstr(string, substr);
  ```
