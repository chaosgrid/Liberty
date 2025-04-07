#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249cb8 _public_6249cb8
#define public_6249cc0 _public_6249cc0

PROC_DECLARE(0x6249cb0, internal_6249cb0, public_6249cb0);
/* CHUNK of public_62346d0 */
extern "C" NAKED register_t __cdecl internal_6249cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_62346a0
        public_6249cb8 : nop
        lea ecx, ss:[ebp+8]
        jmp public_62346a0
        public_6249cc0 : nop
        mov eax, offset public_6252ce8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6249cb8, public_6249cb8)
        ASM_EXPORT_ENTRY_LAST(0x6249cc0, public_6249cc0)
    }
}

#undef public_6249cb8
#undef public_6249cc0

#pragma init_seg(compiler)
extern "C" void const* const public_6249cb8 = __AsmFindLabelExport(&internal_6249cb0, 0x6249cb8);
extern "C" void const* const public_6249cc0 = __AsmFindLabelExport(&internal_6249cb0, 0x6249cc0);
