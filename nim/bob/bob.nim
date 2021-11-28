import strutils
import re

proc hey*(input: string) : string =
  var text = input
  text.removeSuffix('!')
  text = text.strip(chars={' '})
  let
    isQuestion = text.endsWith('?')
    isShouting = (text == text.toUpperAscii) and text.contains(re"[A-Za-z]")
    isSilence = not text.contains(re"\w")

  result = "Whatever."
  if isQuestion and isShouting:
    result = "Calm down, I know what I'm doing!"
  elif isQuestion:
    result = "Sure."
  elif isShouting:
    result = "Whoa, chill out!"
  elif isSilence:
    result = "Fine. Be that way!"
