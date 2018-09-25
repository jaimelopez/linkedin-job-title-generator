
// MIT License
//
// Copyright (c) 2018 Jaime Lopez
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <ctime> 
#include <iostream>
#include <unordered_set>

#define arraysize(arr) (sizeof(arr) / sizeof(*arr))

const std::string keywords[] = {
    "master",
    "senior",
    "director",
    "shaper",
    "omnichannel",
    "manager",
    "supreme",
    "general",
    "architecture",
    "logistics",
    "engineering",
    "technnical",
    "visionary",
    "evangelist",
    "advocate",
    "marketing",
    "marketer",
    "president",
    "operations",
    "specialist",
    "strategist",
    "hacker",
    "user acquisition",
    "brand",
    "inbound",
    "online",
    "internet",
    "digital",
    "organic",
    "seo",
    "head of",
    "vp",
    "content"
};

int random(const int min, const int max)
{
    return rand() % (max-min + 1) + min;
}

std::string randomWord()
{
    return keywords[random(0, arraysize(keywords))];
}

int main()
{
    srand(time(0));

    int parts = random(2, 8);
    std::unordered_set<std::string> included;
    
    while (included.size() < parts)
    {
        std::string part = randomWord();
        
        if (included.count(part))
        {
            continue;
        }

        included.insert(part);
    }

    for (std::string piece : included)
    {
		std::cout << piece << " ";
    }

    return 0;
}
