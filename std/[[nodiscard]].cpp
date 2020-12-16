// https://cxxstd.minidump.info/c++17/[[nodiscard]]-attribute/

// 在函数前加上[[nodiscard]]后，编译器发现函数被调用时并没有使用它的返回值，则会报一个诸如warning: ignoring return value of 'xxx'的警告。
// 在类或结构体前加上[[nodiscard]]后(如struct [[nodiscard]] STRUCT_NAME), 该类或结构体被作为返回值类型时，如果不使用该返回值，则编译器警告

// 建议要谨慎考虑是否真的需要使用[[nodiscard]]属性，如果确实任何情况下都没理由可以忽略掉返回值，则可以使用。