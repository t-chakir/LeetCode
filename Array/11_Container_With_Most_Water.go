package main

import (
	"fmt"
)

func maxArea(height []int) int {

	num := 0
	multMax := 0
	mult := 0
	left := 0
	right := len(height) - 1

	for right > left {
		if height[right] < height[left] {
			num = height[right]
		} else {
			num = height[left]
		}
		mult = (right - left) * num
		if mult > multMax {
			multMax = mult
		}

		if height[right] > height[left] {
			left++
		} else {
			right--
		}
	}
	return multMax
}

func main() {

	array := []int{1, 8, 6, 2, 5, 4, 8, 3, 7}

	result := maxArea(array)

	fmt.Print(result)
}
