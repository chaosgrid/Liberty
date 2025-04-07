#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62086e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247538 _public_6247538
#define public_6247540 _public_6247540
#define public_6247548 _public_6247548
#define public_6247550 _public_6247550

PROC_DECLARE(0x6247530, internal_6247530, public_6247530);
/* CHUNK of public_62078c0 */
extern "C" NAKED register_t __cdecl internal_6247530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_62086e0
        public_6247538 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_62086e0
        public_6247540 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_62086e0
        public_6247548 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_62086e0
        public_6247550 : nop
        mov eax, offset public_6250308
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247530)
        ASM_EXPORT_ENTRY_FIRST(0x6247538, public_6247538)
        ASM_EXPORT_ENTRY(0x6247540, public_6247540)
        ASM_EXPORT_ENTRY(0x6247548, public_6247548)
        ASM_EXPORT_ENTRY_LAST(0x6247550, public_6247550)
    }
}

#undef public_6247538
#undef public_6247540
#undef public_6247548
#undef public_6247550

#pragma init_seg(compiler)
extern "C" void const* const public_6247538 = __AsmFindLabelExport(&internal_6247530, 0x6247538);
extern "C" void const* const public_6247540 = __AsmFindLabelExport(&internal_6247530, 0x6247540);
extern "C" void const* const public_6247548 = __AsmFindLabelExport(&internal_6247530, 0x6247548);
extern "C" void const* const public_6247550 = __AsmFindLabelExport(&internal_6247530, 0x6247550);
