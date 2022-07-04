#include <spdlog/spdlog.h>
#include <GLFW/glfw3.h>

int main()
{
    SPDLOG_INFO("Start Program");

        // glfw 라이브러리 초기화, 실패하면 에러 출력후 종료
    SPDLOG_INFO("Initialize glfw");
    if (!glfwInit()) {
        const char* description = nullptr;
        glfwGetError(&description);
        SPDLOG_ERROR("failed to initialize glfw: {}", description);
        return -1;
    }

        // glfw 윈도우 생성, 실패하면 에러 출력후 종료
    SPDLOG_INFO("Create glfw window");
    auto window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME,
      nullptr, nullptr);
    if (!window) {
        SPDLOG_ERROR("failed to create glfw window");
        glfwTerminate();
        return -1;
    }

        // glfw 루프 실행, 윈도우 close 버튼을 누르면 정상 종료
    SPDLOG_INFO("Start main loop");
    while (!glfwWindowShouldClose(window)) { // 윈도우 종료버튼을 누르지 않으면 계속
        glfwPollEvents(); // 이전의 마우스,키보드 이벤트들을 수집하는 함수

        if(glfwWindowShouldClose(window)) // 윈도우 종료버튼을 누르면 실행
        {
            SPDLOG_INFO("WINDOW CLOSED");
        }
    }

    glfwTerminate();
    return 0;
}