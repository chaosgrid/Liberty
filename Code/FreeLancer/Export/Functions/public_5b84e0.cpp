#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b84e8 _public_5b84e8
#define public_5b84f0 _public_5b84f0

PROC_DECLARE(0x5b84e0, internal_5b84e0, public_5b84e0);
/* CHUNK of public_406dc0 */
extern "C" NAKED register_t __cdecl internal_5b84e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_407000
        public_5b84e8 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_4de730
        public_5b84f0 : nop
        mov eax, offset public_5f1fc0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b84e0)
        ASM_EXPORT_ENTRY_FIRST(0x5b84e8, public_5b84e8)
        ASM_EXPORT_ENTRY_LAST(0x5b84f0, public_5b84f0)
    }
}

#undef public_5b84e8
#undef public_5b84f0

#pragma init_seg(compiler)
extern "C" void const* const public_5b84e8 = __AsmFindLabelExport(&internal_5b84e0, 0x5b84e8);
extern "C" void const* const public_5b84f0 = __AsmFindLabelExport(&internal_5b84e0, 0x5b84f0);
