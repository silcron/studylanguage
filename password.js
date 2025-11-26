const chars = "abcdefghijklmnopqrstuvwxyz0123456789";
let pw = "";

for (let i = 0; i < 8; i++) {   // 8자리 비밀번호
    const index = Math.floor(Math.random() * chars.length);
    pw = pw + chars[index];
}

console.log("생성된 비밀번호:", pw);
