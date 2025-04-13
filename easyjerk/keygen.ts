const secret = 'Xn`k{Vfu'.split('')

let res = ''
secret.forEach((c, i) => {
	res += String.fromCharCode((c.charCodeAt(0) - 13) ^ (i + 7))
})

console.debug(res) // LiZTeETf
