#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249098 _public_6249098

PROC_DECLARE(0x6249090, internal_6249090, public_6249090);
/* CHUNK of public_6227b70 */
extern "C" NAKED register_t __cdecl internal_6249090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_6209f60
        public_6249098 : nop
        mov eax, offset public_6252008
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249090)
        ASM_EXPORT_ENTRY_SINGLE(0x6249098, public_6249098)
    }
}

#undef public_6249098

#pragma init_seg(compiler)
extern "C" void const* const public_6249098 = __AsmFindLabelExport(&internal_6249090, 0x6249098);
