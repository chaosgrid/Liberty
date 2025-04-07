#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_62307e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249858 _public_6249858
#define public_6249860 _public_6249860

PROC_DECLARE(0x6249850, internal_6249850, public_6249850);
/* CHUNK of public_622f8b0 */
extern "C" NAKED register_t __cdecl internal_6249850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_62307e0
        public_6249858 : nop
        lea ecx, ss:[ebp+4]
        jmp public_62307d0
        public_6249860 : nop
        mov eax, offset public_6252800
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249850)
        ASM_EXPORT_ENTRY_FIRST(0x6249858, public_6249858)
        ASM_EXPORT_ENTRY_LAST(0x6249860, public_6249860)
    }
}

#undef public_6249858
#undef public_6249860

#pragma init_seg(compiler)
extern "C" void const* const public_6249858 = __AsmFindLabelExport(&internal_6249850, 0x6249858);
extern "C" void const* const public_6249860 = __AsmFindLabelExport(&internal_6249850, 0x6249860);
