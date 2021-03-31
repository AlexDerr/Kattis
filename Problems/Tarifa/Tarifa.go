package main

import(
    "fmt"
)

func main(){
    var x, n, temp int
    
    fmt.Scan(&x)
    fmt.Scan(&n)
    
    total := x * (n + 1)
    
    for i := 0; i < n; i++{
        fmt.Scan(&temp)
        total -= temp
    }
    
    fmt.Println(total)
}
