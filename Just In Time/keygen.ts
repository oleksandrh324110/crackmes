const chars = [
	37,
	200 >> 1,
	212 >> 1,
	107,
	80 >> 1,
	228 / 4,
	94,
	246 >> 1,
	184 / 4,
	102,
	128 >> 1,
	196 / 4,
	70,
	104 >> 1,
]

console.debug(String.fromCharCode(...chars)) // works 33% of the time
