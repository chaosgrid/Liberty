#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9afb _public_6fa9afb
#define public_6fa9b06 _public_6fa9b06

PROC_DECLARE(0x6fa9af0, internal_6fa9af0, public_6fa9af0);
/* CHUNK of public_6eaa3e0 */
extern "C" NAKED register_t __cdecl internal_6fa9af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x104]
        jmp public_6f28e10
        public_6fa9afb : nop
        lea ecx, ss:[ebp-0xE0]
        jmp public_6ea7c30
        public_6fa9b06 : nop
        mov eax, offset public_6fbde58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9af0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9afb, public_6fa9afb)
        ASM_EXPORT_ENTRY_LAST(0x6fa9b06, public_6fa9b06)
    }
}

#undef public_6fa9afb
#undef public_6fa9b06

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9afb = __AsmFindLabelExport(&internal_6fa9af0, 0x6fa9afb);
extern "C" void const* const public_6fa9b06 = __AsmFindLabelExport(&internal_6fa9af0, 0x6fa9b06);
