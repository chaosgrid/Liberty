#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248fd8 _public_6248fd8
#define public_6248fe0 _public_6248fe0

PROC_DECLARE(0x6248fd0, internal_6248fd0, public_6248fd0);
/* CHUNK of public_6226120 */
extern "C" NAKED register_t __cdecl internal_6248fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6225910
        public_6248fd8 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6225910
        public_6248fe0 : nop
        mov eax, offset public_6251f30
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248fd0)
        ASM_EXPORT_ENTRY_FIRST(0x6248fd8, public_6248fd8)
        ASM_EXPORT_ENTRY_LAST(0x6248fe0, public_6248fe0)
    }
}

#undef public_6248fd8
#undef public_6248fe0

#pragma init_seg(compiler)
extern "C" void const* const public_6248fd8 = __AsmFindLabelExport(&internal_6248fd0, 0x6248fd8);
extern "C" void const* const public_6248fe0 = __AsmFindLabelExport(&internal_6248fd0, 0x6248fe0);
