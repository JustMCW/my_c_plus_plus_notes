// New (modern) method
// inline is now used for functions that may have mutiple declarations
// those declarations must match otherwise linker error is thrown
inline double pi() { return 3.1415926; }

// especially useful for header functions ( they are importorted mutiple times )

// also i just realiazed comment above functions become documentation
