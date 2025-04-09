#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c05f8 _public_5c05f8
#define public_5c0600 _public_5c0600

PROC_DECLARE(0x5c05f0, internal_5c05f0, public_5c05f0);
/* CHUNK of public_52fa10 */
extern "C" NAKED register_t __cdecl internal_5c05f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_502d90
        public_5c05f8 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_502d90
        public_5c0600 : nop
        mov eax, offset public_5fa748
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c05f0)
        ASM_EXPORT_ENTRY_FIRST(0x5c05f8, public_5c05f8)
        ASM_EXPORT_ENTRY_LAST(0x5c0600, public_5c0600)
    }
}

#undef public_5c05f8
#undef public_5c0600

#pragma init_seg(compiler)
extern "C" void const* const public_5c05f8 = __AsmFindLabelExport(&internal_5c05f0, 0x5c05f8);
extern "C" void const* const public_5c0600 = __AsmFindLabelExport(&internal_5c05f0, 0x5c0600);
