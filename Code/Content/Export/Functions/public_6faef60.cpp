#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faef69 _public_6faef69

PROC_DECLARE(0x6faef60, internal_6faef60, public_6faef60);
/* CHUNK of public_6f480e0 */
extern "C" NAKED register_t __cdecl internal_6faef60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6fb32d8]
        public_6faef69 : nop
        mov eax, offset public_6fc3f08
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faef60)
        ASM_EXPORT_ENTRY_SINGLE(0x6faef69, public_6faef69)
    }
}

#undef public_6faef69

#pragma init_seg(compiler)
extern "C" void const* const public_6faef69 = __AsmFindLabelExport(&internal_6faef60, 0x6faef69);
