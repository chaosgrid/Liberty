#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397528 _public_6397528
#define public_6397530 _public_6397530
#define public_6397538 _public_6397538
#define public_6397540 _public_6397540

PROC_DECLARE(0x6397520, internal_6397520, public_6397520);
/* CHUNK of public_6330340 */
extern "C" NAKED register_t __cdecl internal_6397520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6269110
        public_6397528 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6269110
        public_6397530 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6269110
        public_6397538 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6269110
        public_6397540 : nop
        mov eax, offset public_63b16d4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397520)
        ASM_EXPORT_ENTRY_FIRST(0x6397528, public_6397528)
        ASM_EXPORT_ENTRY(0x6397530, public_6397530)
        ASM_EXPORT_ENTRY(0x6397538, public_6397538)
        ASM_EXPORT_ENTRY_LAST(0x6397540, public_6397540)
    }
}

#undef public_6397528
#undef public_6397530
#undef public_6397538
#undef public_6397540

#pragma init_seg(compiler)
extern "C" void const* const public_6397528 = __AsmFindLabelExport(&internal_6397520, 0x6397528);
extern "C" void const* const public_6397530 = __AsmFindLabelExport(&internal_6397520, 0x6397530);
extern "C" void const* const public_6397538 = __AsmFindLabelExport(&internal_6397520, 0x6397538);
extern "C" void const* const public_6397540 = __AsmFindLabelExport(&internal_6397520, 0x6397540);
