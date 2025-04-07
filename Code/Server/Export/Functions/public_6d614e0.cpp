#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d614ef _public_6d614ef

PROC_DECLARE(0x6d614e0, internal_6d614e0, public_6d614e0);
/* CHUNK of public_6d0a770 */
extern "C" NAKED register_t __cdecl internal_6d614e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp dword ptr ds : [public_6d64390]
        public_6d614ef : nop
        mov eax, offset public_6d72104
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d614e0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d614ef, public_6d614ef)
    }
}

#undef public_6d614ef

#pragma init_seg(compiler)
extern "C" void const* const public_6d614ef = __AsmFindLabelExport(&internal_6d614e0, 0x6d614ef);
