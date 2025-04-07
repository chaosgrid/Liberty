#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210850);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247c38 _public_6247c38
#define public_6247c40 _public_6247c40

PROC_DECLARE(0x6247c30, internal_6247c30, public_6247c30);
/* CHUNK of public_620f830 */
extern "C" NAKED register_t __cdecl internal_6247c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6210850
        public_6247c38 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6210850
        public_6247c40 : nop
        mov eax, offset public_6250a50
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247c30)
        ASM_EXPORT_ENTRY_FIRST(0x6247c38, public_6247c38)
        ASM_EXPORT_ENTRY_LAST(0x6247c40, public_6247c40)
    }
}

#undef public_6247c38
#undef public_6247c40

#pragma init_seg(compiler)
extern "C" void const* const public_6247c38 = __AsmFindLabelExport(&internal_6247c30, 0x6247c38);
extern "C" void const* const public_6247c40 = __AsmFindLabelExport(&internal_6247c30, 0x6247c40);
