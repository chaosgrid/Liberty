#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1598 _public_5c1598
#define public_5c15a0 _public_5c15a0

PROC_DECLARE(0x5c1590, internal_5c1590, public_5c1590);
/* CHUNK of public_559c20 */
extern "C" NAKED register_t __cdecl internal_5c1590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5c1598 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_405840
        public_5c15a0 : nop
        mov eax, offset public_5fb940
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1590)
        ASM_EXPORT_ENTRY_FIRST(0x5c1598, public_5c1598)
        ASM_EXPORT_ENTRY_LAST(0x5c15a0, public_5c15a0)
    }
}

#undef public_5c1598
#undef public_5c15a0

#pragma init_seg(compiler)
extern "C" void const* const public_5c1598 = __AsmFindLabelExport(&internal_5c1590, 0x5c1598);
extern "C" void const* const public_5c15a0 = __AsmFindLabelExport(&internal_5c1590, 0x5c15a0);
