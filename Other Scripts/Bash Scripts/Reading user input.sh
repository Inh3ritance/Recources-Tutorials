#!/bin/bash

echo -e "Hello, please type the words: \c "
read word
echo "the word you entered is $word"
echo -e "Can you type in 2 words?"
read word1 word2
echo "here is your input \"words1\" \"word2\""
echo -e "How do you feel about bash scripting?"
# read command now stores a reply into the default build-in variable $REPLY
read
echo "You said $REPLY, I'm glad to hear that! "
echo -e "What are your favorite colours ? "
read -a colours
echo "My favorite colours are also ${colours[0]}, ${colours[1]} and ${colours[2]}:-)" 