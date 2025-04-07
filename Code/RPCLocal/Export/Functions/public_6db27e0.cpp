#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d964e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db27e8 _public_6db27e8
#define public_6db27f3 _public_6db27f3

PROC_DECLARE(0x6db27e0, internal_6db27e0, public_6db27e0);
/* CHUNK of public_6d95f30 */
extern "C" NAKED register_t __cdecl internal_6db27e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6d8f4c0
        public_6db27e8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6d964e0
        public_6db27f3 : nop
        mov eax, offset public_6db6fe4
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db27e0)
        ASM_EXPORT_ENTRY_FIRST(0x6db27e8, public_6db27e8)
        ASM_EXPORT_ENTRY_LAST(0x6db27f3, public_6db27f3)
    }
}

#undef public_6db27e8
#undef public_6db27f3

#pragma init_seg(compiler)
extern "C" void const* const public_6db27e8 = __AsmFindLabelExport(&internal_6db27e0, 0x6db27e8);
extern "C" void const* const public_6db27f3 = __AsmFindLabelExport(&internal_6db27e0, 0x6db27f3);
