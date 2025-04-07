#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac92b _public_6fac92b
#define public_6fac936 _public_6fac936
#define public_6fac941 _public_6fac941
#define public_6fac94c _public_6fac94c

PROC_DECLARE(0x6fac920, internal_6fac920, public_6fac920);
/* CHUNK of public_6efc2d0 */
extern "C" NAKED register_t __cdecl internal_6fac920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x144]
        jmp public_6f15350
        public_6fac92b : nop
        lea ecx, ss:[ebp-0x128]
        jmp public_6ecfa90
        public_6fac936 : nop
        lea ecx, ss:[ebp-0x15C]
        jmp public_6f28e10
        public_6fac941 : nop
        lea ecx, ss:[ebp-0x128]
        jmp public_6f15350
        public_6fac94c : nop
        mov eax, offset public_6fc15c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac920)
        ASM_EXPORT_ENTRY_FIRST(0x6fac92b, public_6fac92b)
        ASM_EXPORT_ENTRY(0x6fac936, public_6fac936)
        ASM_EXPORT_ENTRY(0x6fac941, public_6fac941)
        ASM_EXPORT_ENTRY_LAST(0x6fac94c, public_6fac94c)
    }
}

#undef public_6fac92b
#undef public_6fac936
#undef public_6fac941
#undef public_6fac94c

#pragma init_seg(compiler)
extern "C" void const* const public_6fac92b = __AsmFindLabelExport(&internal_6fac920, 0x6fac92b);
extern "C" void const* const public_6fac936 = __AsmFindLabelExport(&internal_6fac920, 0x6fac936);
extern "C" void const* const public_6fac941 = __AsmFindLabelExport(&internal_6fac920, 0x6fac941);
extern "C" void const* const public_6fac94c = __AsmFindLabelExport(&internal_6fac920, 0x6fac94c);
