package main

import "fmt"

func searchInsert(nums []int, target int) int {

	result := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] >= target {
			nums[result] = nums[i]

			return result
		}
		result++
	}
	return result
}

func main() {
	array := []int{1, 3, 5, 6}
	tar := 5

	num := searchInsert(array, tar)

	fmt.Print("Массив: ")
	for i := 0; i < num; i++ {
		fmt.Print(num)
		break
	}
}
