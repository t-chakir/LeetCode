package main

import (
	"fmt"
)

func twoSum(nums []int, target int) []int {

	result := []int{}

	for i := 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[i]+nums[j] == target {
				result = append(result, i)
				result = append(result, j)
				return result
			}
		}
	}
	return result
}

func main() {
	tar := 6
	array := []int{3, 2, 4}

	result := twoSum(array, tar)

	fmt.Print("Индекс: ")

	for _, index := range result {
		fmt.Print(index, " ")
	}

	fmt.Println()
}
