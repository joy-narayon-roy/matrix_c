package main

import (
	"fmt"
)

func main() {
	// reader := bufio.NewReader(os.Stdin)
	var num int

	fmt.Printf("Plase input the number - ")
	fmt.Scan(&num)

	fmt.Printf("You have entered - %d\n", num)
	fmt.Printf("Address - %d\n", &num)
}
