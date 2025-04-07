#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63569 _public_6d63569
#define public_6d63572 _public_6d63572

PROC_DECLARE(0x6d63560, internal_6d63560, public_6d63560);
/* CHUNK of public_6d4eda0 */
extern "C" NAKED register_t __cdecl internal_6d63560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d64694]
        public_6d63569 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6d64694]
        public_6d63572 : nop
        mov eax, offset public_6d757e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63560)
        ASM_EXPORT_ENTRY_FIRST(0x6d63569, public_6d63569)
        ASM_EXPORT_ENTRY_LAST(0x6d63572, public_6d63572)
    }
}

#undef public_6d63569
#undef public_6d63572

#pragma init_seg(compiler)
extern "C" void const* const public_6d63569 = __AsmFindLabelExport(&internal_6d63560, 0x6d63569);
extern "C" void const* const public_6d63572 = __AsmFindLabelExport(&internal_6d63560, 0x6d63572);
