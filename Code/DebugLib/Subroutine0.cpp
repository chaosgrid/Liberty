#include "Export/Subroutine/code_0.inl" 


#pragma comment(linker, "/alternatename:loc_65D73A0=_sub_65D73A0")
extern "C" _naked _weak void sub_65D73A0() // ___memcpy
{
    asm("jmp _memcpy;");
}

#pragma comment(linker, "/alternatename:loc_65D8200=_sub_65D8200")
extern "C" _naked _weak void sub_65D8200() // ___memcpy_0
{
    asm("jmp _memcpy;");
}

extern "C" _naked _weak void sub_65D76D5() // __onexit
{
    // __DEBUG_ASM(65D76D5);
    // chunk 0x65D76D5 _sub_65D76D5
    asm("loc_65D76D5: push %esi;");
    asm("loc_65D76D6: call _sub_65D9B33;");
    asm("loc_65D76DB: pushl _data_65E7A50;");
    asm("loc_65D76E1: call _sub_65D9E87;");
    asm("loc_65D76E6: mov _data_65E7A50,%edx;");
    asm("loc_65D76EC: pop %ecx;");
    asm("loc_65D76ED: mov _data_65E7A4C,%ecx;");
    asm("loc_65D76F3: mov %ecx,%esi;");
    asm("loc_65D76F5: sub %edx,%esi;");
    asm("loc_65D76F7: add $4,%esi;");
    asm("loc_65D76FA: cmp %esi,%eax;");
    asm("loc_65D76FC: jae loc_65D773B;");
    asm("loc_65D76FE: push %edx;");
    asm("loc_65D76FF: call _sub_65D9E87;");
    asm("loc_65D7704: add $0x10,%eax;");
    asm("loc_65D7707: push %eax;");
    asm("loc_65D7708: pushl _data_65E7A50;");
    asm("loc_65D770E: call _sub_65D9B5F;");
    asm("loc_65D7713: add $0xC,%esp;");
    asm("loc_65D7716: test %eax,%eax;");
    asm("loc_65D7718: jne loc_65D771E;");
    asm("loc_65D771A: xor %esi,%esi;");
    asm("loc_65D771C: jmp loc_65D774A;");
    asm("loc_65D771E: mov _data_65E7A4C,%ecx;");
    asm("loc_65D7724: sub _data_65E7A50,%ecx;");
    asm("loc_65D772A: mov %eax,_data_65E7A50;");
    asm("loc_65D772F: sar $2,%ecx;");
    asm("loc_65D7732: lea (%eax,%ecx,4),%ecx;");
    asm("loc_65D7735: mov %ecx,_data_65E7A4C;");
    asm("loc_65D773B: mov 8(%esp),%eax;");
    asm("loc_65D773F: mov %eax,(%ecx);");
    asm("loc_65D7741: addl $4,_data_65E7A4C;");
    asm("loc_65D7748: mov %eax,%esi;");
    asm("loc_65D774A: call _sub_65D9B3C;");
    asm("loc_65D774F: mov %esi,%eax;");
    asm("loc_65D7751: pop %esi;");
    asm("loc_65D7752: ret;");
    asm("int3;"); // unreachable
}
