# 통합과학 보고서용 코드

- 이 코드는 통합과학 보고서에서 쓰이는 코드임.

- 이 코드는 실행 파일을 바로 만들어 주는 컴파일러를 쓰는 C 언어(컴파일러는 clang)와, 중간 코드인 바이트 코드를 생성해서 Java Virtual Machine 위에서 돌리는 Java(JDK는 Oracle OpenJDK), JIT를 쓰는 JavaScript(구현체는 Node.js)와 JIT를 안 쓰는 JavaScript(이역시도 구현체는 Node.js이며, --jitless 옵션을 부여) 사이의 실행 속도를 비교하는 코드임.

- 소스 코드의 주석은 `main.c`에만 존재함.

## 사용된 컴파일러, 구현체의 버전

- C: Apple clang version 21.0.0 (clang-2100.3.34.2)

- JDK: openjdk 25.0.4.1 2026-08-18

- Node.js: v24.21.0
