#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_42d0c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8d6b _public_5b8d6b
#define public_5b8d76 _public_5b8d76
#define public_5b8d81 _public_5b8d81
#define public_5b8d8c _public_5b8d8c

PROC_DECLARE(0x5b8d60, internal_5b8d60, public_5b8d60);
/* CHUNK of public_42d1d0 */
extern "C" NAKED register_t __cdecl internal_5b8d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x458]
        jmp public_42d0c0
        public_5b8d6b : nop
        lea ecx, ss:[ebp-0x46C]
        jmp public_42cfd0
        public_5b8d76 : nop
        lea ecx, ss:[ebp-0x448]
        jmp public_42cfd0
        public_5b8d81 : nop
        lea ecx, ss:[ebp-0x434]
        jmp public_42cfd0
        public_5b8d8c : nop
        mov eax, offset public_5f2c3c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8d60)
        ASM_EXPORT_ENTRY_FIRST(0x5b8d6b, public_5b8d6b)
        ASM_EXPORT_ENTRY(0x5b8d76, public_5b8d76)
        ASM_EXPORT_ENTRY(0x5b8d81, public_5b8d81)
        ASM_EXPORT_ENTRY_LAST(0x5b8d8c, public_5b8d8c)
    }
}

#undef public_5b8d6b
#undef public_5b8d76
#undef public_5b8d81
#undef public_5b8d8c

#pragma init_seg(compiler)
extern "C" void const* const public_5b8d6b = __AsmFindLabelExport(&internal_5b8d60, 0x5b8d6b);
extern "C" void const* const public_5b8d76 = __AsmFindLabelExport(&internal_5b8d60, 0x5b8d76);
extern "C" void const* const public_5b8d81 = __AsmFindLabelExport(&internal_5b8d60, 0x5b8d81);
extern "C" void const* const public_5b8d8c = __AsmFindLabelExport(&internal_5b8d60, 0x5b8d8c);
