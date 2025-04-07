#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61c09 _public_6d61c09

PROC_DECLARE(0x6d61c00, internal_6d61c00, public_6d61c00);
/* CHUNK of public_6d13270 */
extern "C" NAKED register_t __cdecl internal_6d61c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_6d64780]
        public_6d61c09 : nop
        mov eax, offset public_6d728e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61c00)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61c09, public_6d61c09)
    }
}

#undef public_6d61c09

#pragma init_seg(compiler)
extern "C" void const* const public_6d61c09 = __AsmFindLabelExport(&internal_6d61c00, 0x6d61c09);
