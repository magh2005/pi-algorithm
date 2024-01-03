pi = 0.0; Float tmp = 1.0; Float i = 1.0; direct = 1;

while i < 10000000
  pi = pi + direct * (1/i);
  direct *= -1;
  i += 2;
end

puts 4 * pi;
