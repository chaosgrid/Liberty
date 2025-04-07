#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d615e9 _public_6d615e9

PROC_DECLARE(0x6d615e0, internal_6d615e0, public_6d615e0);
/* CHUNK of public_6d0b800 */
extern "C" NAKED register_t __cdecl internal_6d615e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_6d641e4]
        public_6d615e9 : nop
        mov eax, offset public_6d72208
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d615e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d615e9, public_6d615e9)
    }
}

#undef public_6d615e9

#pragma init_seg(compiler)
extern "C" void const* const public_6d615e9 = __AsmFindLabelExport(&internal_6d615e0, 0x6d615e9);
