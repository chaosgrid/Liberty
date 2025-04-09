#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb8e9 _public_5bb8e9

PROC_DECLARE(0x5bb8e0, internal_5bb8e0, public_5bb8e0);
/* CHUNK of public_46c410 */
extern "C" NAKED register_t __cdecl internal_5bb8e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp dword ptr ds : [public_5c62c8]
        public_5bb8e9 : nop
        mov eax, offset public_5f5bb4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb8e0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb8e9, public_5bb8e9)
    }
}

#undef public_5bb8e9

#pragma init_seg(compiler)
extern "C" void const* const public_5bb8e9 = __AsmFindLabelExport(&internal_5bb8e0, 0x5bb8e9);
