#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6225920);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248e6b _public_6248e6b
#define public_6248e76 _public_6248e76

PROC_DECLARE(0x6248e60, internal_6248e60, public_6248e60);
/* CHUNK of public_6225240 */
extern "C" NAKED register_t __cdecl internal_6248e60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10C]
        jmp public_6225920
        public_6248e6b : nop
        lea ecx, ss:[ebp-0x11C]
        jmp public_6225910
        public_6248e76 : nop
        mov eax, offset public_6251d90
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248e60)
        ASM_EXPORT_ENTRY_FIRST(0x6248e6b, public_6248e6b)
        ASM_EXPORT_ENTRY_LAST(0x6248e76, public_6248e76)
    }
}

#undef public_6248e6b
#undef public_6248e76

#pragma init_seg(compiler)
extern "C" void const* const public_6248e6b = __AsmFindLabelExport(&internal_6248e60, 0x6248e6b);
extern "C" void const* const public_6248e76 = __AsmFindLabelExport(&internal_6248e60, 0x6248e76);
