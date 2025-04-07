#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60859 _public_6d60859

PROC_DECLARE(0x6d60850, internal_6d60850, public_6d60850);
/* CHUNK of public_6cf0b50 */
extern "C" NAKED register_t __cdecl internal_6d60850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6d643d4]
        public_6d60859 : nop
        mov eax, offset public_6d7118c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60850)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60859, public_6d60859)
    }
}

#undef public_6d60859

#pragma init_seg(compiler)
extern "C" void const* const public_6d60859 = __AsmFindLabelExport(&internal_6d60850, 0x6d60859);
