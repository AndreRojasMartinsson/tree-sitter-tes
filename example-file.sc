

float: fn add(uint: a, uint: b, uint: c) do
  return a + b + c
end
// hi this line comment

@incl log
@incl Array/new
uint: fn main(uint: arg_a, float: b) do
/* ockey bucko */
  add(5, 2, 7)
  addd("Hey")

  str[]: arr = ["hello", "world", "budda"]


  uint: mut result = std:math:advanced:add(5, 7, 1)

  str[]: arr = Array:new()

  str: HI_BUCKO = "fhgrtjbgt"
  int: mut num = 5348.234


  bool: mut _hey = true || false && HI_BUCKO

  num = 54

  uint: mut i;
  for: i = 0, i < 10, i++ do
    log(i)
    log("Yo mama")
  end

  while: i < 20 do
    log(i)
    ++i
  end

  if: i == 20 do
    log("AHa")
  else if: i > 5 do
    log("HEh")
  else:
    log("AH")
  end


  return 0
end

@pub main
@pub add
