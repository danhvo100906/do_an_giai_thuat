class MyQueue {
public:

    stack<int> inStack;
    stack<int> outStack;

    MyQueue() {

    }

    // thêm phần tử vào queue
    void push(int x) {

        inStack.push(x);
    }

    // lấy phần tử đầu queue
    int pop() {

        // nếu outStack rỗng
        if (outStack.empty()) {

            // chuyển toàn bộ từ inStack
            while (!inStack.empty()) {

                outStack.push(inStack.top());

                inStack.pop();
            }
        }

        int frontValue = outStack.top();

        outStack.pop();

        return frontValue;
    }

    // xem phần tử đầu queue
    int peek() {

        // nếu outStack rỗng
        if (outStack.empty()) {

            // chuyển dữ liệu
            while (!inStack.empty()) {

                outStack.push(inStack.top());

                inStack.pop();
            }
        }

        return outStack.top();
    }

    // kiểm tra queue rỗng
    bool empty() {

        return inStack.empty() && outStack.empty();
    }
};