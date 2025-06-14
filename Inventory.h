// Inventory.h

#pragma once
#include <string>
#include <unordered_map>
#include <iostream>

class Inventory {
private:
    std::unordered_map<std::string, int> items;

public:
    void add_item(const std::string& item_name, int quantity = 1) {
        items[item_name] += quantity;
    }

    void remove_item(const std::string& item_name, int quantity = 1) {
        auto it = items.find(item_name);
        if (it != items.end()) {
            it->second -= quantity;
            if (it->second <= 0) {
                items.erase(it);
            }
        }
    }

    void list_items() const {
        std::cout << "Inventory Contents:\n";
        for (const auto& pair : items) {
            std::cout << "- " << pair.first << ": " << pair.second << "\n";
        }
    }

    bool has_item(const std::string& item_name) const {
        return items.find(item_name) != items.end();
    }
};
