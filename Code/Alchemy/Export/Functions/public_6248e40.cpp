#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6225920);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248e48 _public_6248e48
#define public_6248e50 _public_6248e50

PROC_DECLARE(0x6248e40, internal_6248e40, public_6248e40);
/* CHUNK of public_6225000 */
extern "C" NAKED register_t __cdecl internal_6248e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6225920
        public_6248e48 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6225910
        public_6248e50 : nop
        mov eax, offset public_6251d64
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248e40)
        ASM_EXPORT_ENTRY_FIRST(0x6248e48, public_6248e48)
        ASM_EXPORT_ENTRY_LAST(0x6248e50, public_6248e50)
    }
}

#undef public_6248e48
#undef public_6248e50

#pragma init_seg(compiler)
extern "C" void const* const public_6248e48 = __AsmFindLabelExport(&internal_6248e40, 0x6248e48);
extern "C" void const* const public_6248e50 = __AsmFindLabelExport(&internal_6248e40, 0x6248e50);
