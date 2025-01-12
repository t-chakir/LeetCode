package main

import "fmt"

func removeElement(nums []int, val int) int {

	resul := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != val {
			nums[resul] = nums[i]
			resul++
		}
	}
	return resul
}

func main() {
	val := 2
	nums := []int{0, 1, 2, 2, 3, 0, 4, 2}

	result := removeElement(nums, val)

	fmt.Print("Масссив: ")

	for i := 0; i < result; i++ {
		fmt.Print(nums[i])
	}
}
