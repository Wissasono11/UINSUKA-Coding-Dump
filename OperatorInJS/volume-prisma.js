function hitungVolumePrisma(tinggi, siku1, siku2) {
  const luasAlas = (siku1 + siku2) / 2;
  const volPrisma = luasAlas * tinggi;
  return volPrisma;
}

const tinggi = 20,
  sisi1 = 5,
  sisi2 = 4;

const value = hitungVolumePrisma(tinggi, sisi1, sisi2);
console.log(`Volume prisma adalah ${value} cm³`);
