function generateOtp(n) {
  let otp = "";

  for (let i = 0; i < n; i++) {
    otp += Math.floor(Math.random() * 10);
    console.log(otp);
  }

  return otp;
}

console.log(generateOtp(6));

// console.log(Math.random()*1000000);