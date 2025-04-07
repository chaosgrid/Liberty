#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60ea9 _public_6d60ea9

PROC_DECLARE(0x6d60ea0, internal_6d60ea0, public_6d60ea0);
/* CHUNK of public_6d00d50 */
extern "C" NAKED register_t __cdecl internal_6d60ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6d6459c]
        public_6d60ea9 : nop
        mov eax, offset public_6d719f8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ea0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60ea9, public_6d60ea9)
    }
}

#undef public_6d60ea9

#pragma init_seg(compiler)
extern "C" void const* const public_6d60ea9 = __AsmFindLabelExport(&internal_6d60ea0, 0x6d60ea9);
