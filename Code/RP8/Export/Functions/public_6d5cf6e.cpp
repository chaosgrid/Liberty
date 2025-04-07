#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30c72);
CLANG_FORWARD_PROC_SYMBOL(public_6d36ba7);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cf76 _public_6d5cf76
#define public_6d5cf7e _public_6d5cf7e

PROC_DECLARE(0x6d5cf6e, internal_6d5cf6e, public_6d5cf6e);
/* CHUNK of public_6d2f7cd */
extern "C" NAKED register_t __cdecl internal_6d5cf6e()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_6d30c72
        public_6d5cf76 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6d36ba7
        public_6d5cf7e : nop
        mov eax, offset public_6d628e0
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cf6e)
        ASM_EXPORT_ENTRY_FIRST(0x6d5cf76, public_6d5cf76)
        ASM_EXPORT_ENTRY_LAST(0x6d5cf7e, public_6d5cf7e)
    }
}

#undef public_6d5cf76
#undef public_6d5cf7e

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cf76 = __AsmFindLabelExport(&internal_6d5cf6e, 0x6d5cf76);
extern "C" void const* const public_6d5cf7e = __AsmFindLabelExport(&internal_6d5cf6e, 0x6d5cf7e);
