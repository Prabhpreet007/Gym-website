```mermaid


graph TD
    A[Start] --> B(Prepare water)
    B --> C{Water boiled?}
    C -- Yes --> D(Add tea leaves)
    C -- No --> E(Wait)
    D --> F{Infusion time reached?}
    F -- Yes --> G(Strain tea leaves)
    F -- No --> E
    G --> H{Add sweeteners/milk?}
    H -- Yes --> I(Stir)
    H -- No --> J(Pour into cup)
    I --> J
    J --> K[End]
    E --> C
