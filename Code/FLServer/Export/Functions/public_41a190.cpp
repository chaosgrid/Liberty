#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a19b _public_41a19b
#define public_41a1a6 _public_41a1a6

PROC_DECLARE(0x41a190, internal_41a190, public_41a190);
/* CHUNK of public_40d140 */
extern "C" NAKED register_t __cdecl internal_41a190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xAC]
        jmp public_40d1c0
        public_41a19b : nop
        lea ecx, ss:[ebp-0xAC]
        jmp public_418a98
        public_41a1a6 : nop
        mov eax, offset public_41f2e8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a190)
        ASM_EXPORT_ENTRY_FIRST(0x41a19b, public_41a19b)
        ASM_EXPORT_ENTRY_LAST(0x41a1a6, public_41a1a6)
    }
}

#undef public_41a19b
#undef public_41a1a6

#pragma init_seg(compiler)
extern "C" void const* const public_41a19b = __AsmFindLabelExport(&internal_41a190, 0x41a19b);
extern "C" void const* const public_41a1a6 = __AsmFindLabelExport(&internal_41a190, 0x41a1a6);
