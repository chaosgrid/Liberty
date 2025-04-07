#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6144f _public_6d6144f

PROC_DECLARE(0x6d61440, internal_6d61440, public_6d61440);
/* CHUNK of public_6d0a080 */
extern "C" NAKED register_t __cdecl internal_6d61440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp dword ptr ds : [public_6d64390]
        public_6d6144f : nop
        mov eax, offset public_6d72070
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61440)
        ASM_EXPORT_ENTRY_SINGLE(0x6d6144f, public_6d6144f)
    }
}

#undef public_6d6144f

#pragma init_seg(compiler)
extern "C" void const* const public_6d6144f = __AsmFindLabelExport(&internal_6d61440, 0x6d6144f);
