package main

import "fmt"

func main() {

    var e = 0.0
    f := 1.0
    var i float64
    i = 28

    for i > 0 {
    	f *= i
    	e += f
    	i--
    }
    e /= f
    fmt.Println(e)

}
