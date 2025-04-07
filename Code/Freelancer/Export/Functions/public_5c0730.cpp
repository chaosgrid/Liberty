#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0738 _public_5c0738

PROC_DECLARE(0x5c0730, internal_5c0730, public_5c0730);
/* CHUNK of public_532170 */
extern "C" NAKED register_t __cdecl internal_5c0730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_526a20
        public_5c0738 : nop
        mov eax, offset public_5fa8b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0730)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0738, public_5c0738)
    }
}

#undef public_5c0738

#pragma init_seg(compiler)
extern "C" void const* const public_5c0738 = __AsmFindLabelExport(&internal_5c0730, 0x5c0738);
