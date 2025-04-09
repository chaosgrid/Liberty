#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf748 _public_5bf748

PROC_DECLARE(0x5bf740, internal_5bf740, public_5bf740);
/* CHUNK of public_5012e0 */
extern "C" NAKED register_t __cdecl internal_5bf740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5bf748 : nop
        mov eax, offset public_5f96c4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf740)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf748, public_5bf748)
    }
}

#undef public_5bf748

#pragma init_seg(compiler)
extern "C" void const* const public_5bf748 = __AsmFindLabelExport(&internal_5bf740, 0x5bf748);
