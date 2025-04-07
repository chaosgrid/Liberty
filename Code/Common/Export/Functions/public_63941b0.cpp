#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63941b8 _public_63941b8
#define public_63941c2 _public_63941c2

PROC_DECLARE(0x63941b0, internal_63941b0, public_63941b0);
/* CHUNK of public_62adde0 */
extern "C" NAKED register_t __cdecl internal_63941b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-1]
        jmp public_627e5e0
        public_63941b8 : nop
        mov ecx, offset public_63fc398
        jmp public_627e5e0
        public_63941c2 : nop
        mov eax, offset public_63ad700
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63941b0)
        ASM_EXPORT_ENTRY_FIRST(0x63941b8, public_63941b8)
        ASM_EXPORT_ENTRY_LAST(0x63941c2, public_63941c2)
    }
}

#undef public_63941b8
#undef public_63941c2

#pragma init_seg(compiler)
extern "C" void const* const public_63941b8 = __AsmFindLabelExport(&internal_63941b0, 0x63941b8);
extern "C" void const* const public_63941c2 = __AsmFindLabelExport(&internal_63941b0, 0x63941c2);
