#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60639 _public_6d60639

PROC_DECLARE(0x6d60630, internal_6d60630, public_6d60630);
/* CHUNK of public_6ce7630 */
extern "C" NAKED register_t __cdecl internal_6d60630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60639 : nop
        mov eax, offset public_6d70ee4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60630)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60639, public_6d60639)
    }
}

#undef public_6d60639

#pragma init_seg(compiler)
extern "C" void const* const public_6d60639 = __AsmFindLabelExport(&internal_6d60630, 0x6d60639);
