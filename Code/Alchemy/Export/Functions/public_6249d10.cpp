#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234060);
CLANG_FORWARD_PROC_SYMBOL(public_62346a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249d18 _public_6249d18
#define public_6249d20 _public_6249d20

PROC_DECLARE(0x6249d10, internal_6249d10, public_6249d10);
/* CHUNK of public_6234b30 */
extern "C" NAKED register_t __cdecl internal_6249d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6234060
        public_6249d18 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_62346a0
        public_6249d20 : nop
        mov eax, offset public_6252d64
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249d10)
        ASM_EXPORT_ENTRY_FIRST(0x6249d18, public_6249d18)
        ASM_EXPORT_ENTRY_LAST(0x6249d20, public_6249d20)
    }
}

#undef public_6249d18
#undef public_6249d20

#pragma init_seg(compiler)
extern "C" void const* const public_6249d18 = __AsmFindLabelExport(&internal_6249d10, 0x6249d18);
extern "C" void const* const public_6249d20 = __AsmFindLabelExport(&internal_6249d10, 0x6249d20);
