#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa5f9 _public_6faa5f9

PROC_DECLARE(0x6faa5f0, internal_6faa5f0, public_6faa5f0);
/* CHUNK of public_6eba720 */
extern "C" NAKED register_t __cdecl internal_6faa5f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_6fb308c]
        public_6faa5f9 : nop
        mov eax, offset public_6fbea58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa5f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faa5f9, public_6faa5f9)
    }
}

#undef public_6faa5f9

#pragma init_seg(compiler)
extern "C" void const* const public_6faa5f9 = __AsmFindLabelExport(&internal_6faa5f0, 0x6faa5f9);
