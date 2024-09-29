#include "Context.h"
#include "ConcreteStateA.h"

int main() {
    // Khởi tạo Context với trạng thái ban đầu là ConcreteStateA
    Context* context = new Context(new ConcreteStateA());

    // Thực hiện yêu cầu nhiều lần và các trạng thái sẽ tự chuyển đổi
    context->request();  // Chuyển từ State A sang State B
    context->request();  // Chuyển từ State B sang State A
    context->request();  // Chuyển từ State A sang State B

    delete context;
    return 0;
}