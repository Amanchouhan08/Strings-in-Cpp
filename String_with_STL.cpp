#include <iostream>
#include <string>
#include <algorithm> // for reverse, transform
using namespace std;

int main() {
    // 1️⃣ Create and initialize strings
    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2; // concatenation using +

    cout << "1. Concatenation: " << s3 << endl;
    // Output: 1. Concatenation: Hello World

    // 2️⃣ String size and length
    cout << "2. Size: " << s3.size() << " or Length: " << s3.length() << endl;
    // Output: 2. Size: 11 or Length: 11

    // 3️⃣ Access characters
    cout << "3. First char: " << s3[0] << ", Last char: " << s3[s3.size()-1] << endl;
    // Output: 3. First char: H, Last char: d

    // 4️⃣ Append and push_back
    s1.append(" Everyone");
    s2.push_back('!');
    cout << "4. After append: " << s1 << ", After push_back: " << s2 << endl;
    // Output: 4. After append: Hello Everyone, After push_back: World!

    // 5️⃣ Insert
    s1.insert(5, " Dear"); // insert at index 5
    cout << "5. After insert: " << s1 << endl;
    // Output: 5. After insert: Hello Dear Everyone

    // 6️⃣ Erase
    s1.erase(5, 5); // erase 5 characters from index 5 (" Dear")
    cout << "6. After erase: " << s1 << endl;
    // Output: 6. After erase: Hello Everyone

    // 7️⃣ Replace
    s1.replace(0, 5, "Hi"); // replace "Hello" with "Hi"
    cout << "7. After replace: " << s1 << endl;
    // Output: 7. After replace: Hi Everyone

    // 8️⃣ Substring
    string sub = s3.substr(0, 5); // substring from index 0 of length 5
    cout << "8. Substring: " << sub << endl;
    // Output: 8. Substring: Hello

    // 9️⃣ Find and rfind
    size_t pos = s3.find("World");
    if (pos != string::npos)
        cout << "9. 'World' found at position: " << pos << endl;
    // Output: 9. 'World' found at position: 6

    size_t rpos = s3.rfind("l");
    cout << "   Last occurrence of 'l' at: " << rpos << endl;
    // Output:    Last occurrence of 'l' at: 9

    // 🔟 Compare strings
    string a = "apple", b = "banana";
    if (a.compare(b) < 0)
        cout << "10. 'apple' is smaller than 'banana'" << endl;
    // Output: 10. 'apple' is smaller than 'banana'

    // 11️⃣ Reverse string
    reverse(s3.begin(), s3.end());
    cout << "11. Reverse: " << s3 << endl;
    // Output: 11. Reverse: dlroW olleH

    // 12️⃣ Transform (uppercase/lowercase)
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << "12. Uppercase: " << s1 << endl;
    // Output: 12. Uppercase: HI EVERYONE

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << "    Lowercase: " << s1 << endl;
    // Output:     Lowercase: hi everyone

    // 13️⃣ Clear string
    s2.clear();
    cout << "13. After clear, s2 is empty? " << (s2.empty() ? "Yes" : "No") << endl;
    // Output: 13. After clear, s2 is empty? Yes

    // 14️⃣ Swap
    string x = "Red", y = "Blue";
    x.swap(y);
    cout << "14. After swap: x = " << x << ", y = " << y << endl;
    // Output: 14. After swap: x = Blue, y = Red

    return 0;
}
