class MyStack {
public:

    queue<int> q;

    MyStack() {

    }

    // thêm phần tử vào stack
    void push(int x) {

        // thêm vào queue
        q.push(x);

        // số phần tử trước đó
        int size = q.size();

        // xoay queue
        for (int i = 0; i < size - 1; i++) {

            // đưa phần tử đầu xuống cuối
            q.push(q.front());

            q.pop();
        }
    }

    // xóa phần tử top
    int pop() {

        int topValue = q.front();

        q.pop();

        return topValue;
    }

    // lấy phần tử top
    int top() {

        return q.front();
    }

    // kiểm tra rỗng
    bool empty() {

        return q.empty();
    }
};