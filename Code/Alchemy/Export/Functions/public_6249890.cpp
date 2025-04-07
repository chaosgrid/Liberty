#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62307d0);
CLANG_FORWARD_PROC_SYMBOL(public_62307e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249898 _public_6249898
#define public_62498a0 _public_62498a0

PROC_DECLARE(0x6249890, internal_6249890, public_6249890);
/* CHUNK of public_622fa10 */
extern "C" NAKED register_t __cdecl internal_6249890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_62307e0
        public_6249898 : nop
        lea ecx, ss:[ebp-0x54]
        jmp public_62307d0
        public_62498a0 : nop
        mov eax, offset public_6252858
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249890)
        ASM_EXPORT_ENTRY_FIRST(0x6249898, public_6249898)
        ASM_EXPORT_ENTRY_LAST(0x62498a0, public_62498a0)
    }
}

#undef public_6249898
#undef public_62498a0

#pragma init_seg(compiler)
extern "C" void const* const public_6249898 = __AsmFindLabelExport(&internal_6249890, 0x6249898);
extern "C" void const* const public_62498a0 = __AsmFindLabelExport(&internal_6249890, 0x62498a0);
