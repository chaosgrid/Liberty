#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63941d8 _public_63941d8
#define public_63941e2 _public_63941e2

PROC_DECLARE(0x63941d0, internal_63941d0, public_63941d0);
/* CHUNK of public_62adec0 */
extern "C" NAKED register_t __cdecl internal_63941d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_63941d8 : nop
        mov ecx, offset public_63fc38c
        jmp public_627e5e0
        public_63941e2 : nop
        mov eax, offset public_63ad72c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63941d0)
        ASM_EXPORT_ENTRY_FIRST(0x63941d8, public_63941d8)
        ASM_EXPORT_ENTRY_LAST(0x63941e2, public_63941e2)
    }
}

#undef public_63941d8
#undef public_63941e2

#pragma init_seg(compiler)
extern "C" void const* const public_63941d8 = __AsmFindLabelExport(&internal_63941d0, 0x63941d8);
extern "C" void const* const public_63941e2 = __AsmFindLabelExport(&internal_63941d0, 0x63941e2);
