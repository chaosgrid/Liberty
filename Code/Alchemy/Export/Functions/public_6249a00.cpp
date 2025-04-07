#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249a08 _public_6249a08
#define public_6249a10 _public_6249a10

PROC_DECLARE(0x6249a00, internal_6249a00, public_6249a00);
/* CHUNK of public_6230f30 */
extern "C" NAKED register_t __cdecl internal_6249a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_62307d0
        public_6249a08 : nop
        lea ecx, ss:[ebp+8]
        jmp public_62307d0
        public_6249a10 : nop
        mov eax, offset public_6252a08
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249a00)
        ASM_EXPORT_ENTRY_FIRST(0x6249a08, public_6249a08)
        ASM_EXPORT_ENTRY_LAST(0x6249a10, public_6249a10)
    }
}

#undef public_6249a08
#undef public_6249a10

#pragma init_seg(compiler)
extern "C" void const* const public_6249a08 = __AsmFindLabelExport(&internal_6249a00, 0x6249a08);
extern "C" void const* const public_6249a10 = __AsmFindLabelExport(&internal_6249a00, 0x6249a10);
