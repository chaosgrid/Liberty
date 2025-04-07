#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60bd9 _public_6d60bd9

PROC_DECLARE(0x6d60bd0, internal_6d60bd0, public_6d60bd0);
/* CHUNK of public_6cf8930 */
extern "C" NAKED register_t __cdecl internal_6d60bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60bd9 : nop
        mov eax, offset public_6d71544
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60bd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60bd9, public_6d60bd9)
    }
}

#undef public_6d60bd9

#pragma init_seg(compiler)
extern "C" void const* const public_6d60bd9 = __AsmFindLabelExport(&internal_6d60bd0, 0x6d60bd9);
