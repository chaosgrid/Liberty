#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd0a9 _public_5bd0a9

PROC_DECLARE(0x5bd0a0, internal_5bd0a0, public_5bd0a0);
/* CHUNK of public_4b4510 */
extern "C" NAKED register_t __cdecl internal_5bd0a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c60fc]
        public_5bd0a9 : nop
        mov eax, offset public_5f732c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd0a0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd0a9, public_5bd0a9)
    }
}

#undef public_5bd0a9

#pragma init_seg(compiler)
extern "C" void const* const public_5bd0a9 = __AsmFindLabelExport(&internal_5bd0a0, 0x5bd0a9);
