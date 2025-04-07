#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d964e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db27bb _public_6db27bb
#define public_6db27c3 _public_6db27c3
#define public_6db27ce _public_6db27ce

PROC_DECLARE(0x6db27b0, internal_6db27b0, public_6db27b0);
/* CHUNK of public_6d95e50 */
extern "C" NAKED register_t __cdecl internal_6db27b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db27bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d8f4c0
        public_6db27c3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6d964e0
        public_6db27ce : nop
        mov eax, offset public_6db6fb8
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db27b0)
        ASM_EXPORT_ENTRY_FIRST(0x6db27bb, public_6db27bb)
        ASM_EXPORT_ENTRY(0x6db27c3, public_6db27c3)
        ASM_EXPORT_ENTRY_LAST(0x6db27ce, public_6db27ce)
    }
}

#undef public_6db27bb
#undef public_6db27c3
#undef public_6db27ce

#pragma init_seg(compiler)
extern "C" void const* const public_6db27bb = __AsmFindLabelExport(&internal_6db27b0, 0x6db27bb);
extern "C" void const* const public_6db27c3 = __AsmFindLabelExport(&internal_6db27b0, 0x6db27c3);
extern "C" void const* const public_6db27ce = __AsmFindLabelExport(&internal_6db27b0, 0x6db27ce);
