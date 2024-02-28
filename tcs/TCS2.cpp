#include <iostream>
#include <string>
#include <vector>

int calculate_valency(std::string element) {
    int sum_ord = 0;
    for (char c : element) {
        sum_ord += static_cast<int>(c);
    }
    std::string num_str = std::to_string(sum_ord);
    int sum_digits = 0;
    for (char digit : num_str) {
        sum_digits += digit - '0';
    }
    return (sum_digits % 9) ? (sum_digits % 9) : 9;
}

void balance_compound(std::string compound, int equivalent_point) {
    char element1 = compound[0];
    char element2 = compound[1];

    int valency1 = calculate_valency(std::string(1, element1));
    int valency2 = calculate_valency(std::string(1, element2));
    std::vector<std::string> result_list;

    for (int multiple1 = 1; multiple1 <= equivalent_point / valency1; ++multiple1) {
        int remaining_point = equivalent_point - multiple1 * valency1;
        if (remaining_point % valency2 == 0) {
            int multiple2 = remaining_point / valency2;
            result_list.push_back(std::string(1, element1) + std::to_string(multiple1) + " " +
                                  std::string(1, element2) + std::to_string(multiple2));
        }
    }

    for (int i = result_list.size() - 2; i >= 0; --i) {
        std::cout << result_list[i] << std::endl;
    }

    if (result_list.empty()) {
        std::cout << "Not Possible" << std::endl;
    }
}

int main() {
    std::string compound_input;
    int equivalent_point_input;

    std::cin >> compound_input;
    std::cin >> equivalent_point_input;

    balance_compound(compound_input, equivalent_point_input);

    return 0;
}
