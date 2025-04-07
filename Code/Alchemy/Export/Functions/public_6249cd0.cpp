#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249cd8 _public_6249cd8
#define public_6249ce0 _public_6249ce0

PROC_DECLARE(0x6249cd0, internal_6249cd0, public_6249cd0);
/* CHUNK of public_6234750 */
extern "C" NAKED register_t __cdecl internal_6249cd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_62346a0
        public_6249cd8 : nop
        lea ecx, ss:[ebp-0x10]
        jmp public_62346a0
        public_6249ce0 : nop
        mov eax, offset public_6252d14
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249cd0)
        ASM_EXPORT_ENTRY_FIRST(0x6249cd8, public_6249cd8)
        ASM_EXPORT_ENTRY_LAST(0x6249ce0, public_6249ce0)
    }
}

#undef public_6249cd8
#undef public_6249ce0

#pragma init_seg(compiler)
extern "C" void const* const public_6249cd8 = __AsmFindLabelExport(&internal_6249cd0, 0x6249cd8);
extern "C" void const* const public_6249ce0 = __AsmFindLabelExport(&internal_6249cd0, 0x6249ce0);
