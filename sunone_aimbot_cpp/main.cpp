GhubMouse* gHub = nullptr;

// main() 함수 내에서 초기화
if (config.input_method == "GHUB") {
    gHub = new GhubMouse();
}

// 프로그램 종료 시 정리
if (gHub) {
    delete gHub;
    gHub = nullptr;
} 