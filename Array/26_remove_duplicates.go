package main

import (
	"fmt"
)

func removeDuplicatesGo(nums []int) int {

	unik := 1

	for i := 0; i < len(nums); i++ {
		if nums[i] != nums[unik-1] {
			nums[unik] = nums[i]
			unik++
		}
	}
	return unik
}

func main() {
	array := []int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}

	result := removeDuplicatesGo(array)

	fmt.Print("Индексы: ")

	for i := 0; i < result; i++ {
		fmt.Print(array[i])
	}

}
