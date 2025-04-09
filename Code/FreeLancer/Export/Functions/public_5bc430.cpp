#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc43c _public_5bc43c

PROC_DECLARE(0x5bc430, internal_5bc430, public_5bc430);
/* CHUNK of public_48c8a0 */
extern "C" NAKED register_t __cdecl internal_5bc430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x82C]
        jmp dword ptr ds : [public_5c6098]
        public_5bc43c : nop
        mov eax, offset public_5f6828
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc430)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc43c, public_5bc43c)
    }
}

#undef public_5bc43c

#pragma init_seg(compiler)
extern "C" void const* const public_5bc43c = __AsmFindLabelExport(&internal_5bc430, 0x5bc43c);
