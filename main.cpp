#include <iostream>
#include <vector>

class InferenceEngine {
public:
    void run(const std::vector<float>& input) {
        std::cout << "Running optimized inference on input size: " << input.size() << std::endl;
    }
};

int main() {
    InferenceEngine engine;
    engine.run({1.0, 2.0, 3.0});
    return 0;
}
