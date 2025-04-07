#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ca9 _public_5c0ca9

PROC_DECLARE(0x5c0ca0, internal_5c0ca0, public_5c0ca0);
/* CHUNK of public_53deb0 */
extern "C" NAKED register_t __cdecl internal_5c0ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c60fc]
        public_5c0ca9 : nop
        mov eax, offset public_5faee4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ca0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0ca9, public_5c0ca9)
    }
}

#undef public_5c0ca9

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ca9 = __AsmFindLabelExport(&internal_5c0ca0, 0x5c0ca9);
