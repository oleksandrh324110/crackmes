const v6: any[] = []
const secret = 'sup3r_s3cr3t_k3y_1337'

for (let i = 0; i <= 20; ++i) {
	v6[24 + i] = secret[i].charCodeAt(0) - 34
}

v6[0] = 55
v6[1] = 63
v6[2] = 47
v6[3] = 118
v6[4] = 43
v6[5] = 98
v6[6] = 40
v6[7] = 33
v6[8] = 52
v6[9] = 15
v6[10] = 119
v6[11] = 98
v6[12] = 72
v6[13] = 39
v6[14] = 117
v6[15] = 8
v6[16] = 86
v6[17] = 106
v6[18] = 104
v6[19] = 78
v6[20] = 104

let res = ''

for (let i = 0; i <= 20; ++i) {
	res += String.fromCharCode(v6[i] ^ v6[24 + i])
}

console.debug(res)
