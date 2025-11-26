

#include <iostream>
#include <string>

int main() {
    std::string text;

    std::cout << "문자열을 입력하세요: ";
    std::getline(std::cin, text);

    std::string result = "";

    // 뒤에서부터 하나씩 꺼내기
    for (int i = text.length() - 1; i >= 0; i--) {
        result = result + text[i];
    }

    std::cout << "뒤집힌 문자열: " << result << std::endl;

    return 0;
}
