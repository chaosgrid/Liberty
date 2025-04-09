#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_42d0c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8d0b _public_5b8d0b
#define public_5b8d16 _public_5b8d16
#define public_5b8d21 _public_5b8d21
#define public_5b8d2c _public_5b8d2c

PROC_DECLARE(0x5b8d00, internal_5b8d00, public_5b8d00);
/* CHUNK of public_42cd00 */
extern "C" NAKED register_t __cdecl internal_5b8d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x458]
        jmp public_42d0c0
        public_5b8d0b : nop
        lea ecx, ss:[ebp-0x474]
        jmp public_42cfd0
        public_5b8d16 : nop
        lea ecx, ss:[ebp-0x448]
        jmp public_42cfd0
        public_5b8d21 : nop
        lea ecx, ss:[ebp-0x434]
        jmp public_42cfd0
        public_5b8d2c : nop
        mov eax, offset public_5f2bd4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8d00)
        ASM_EXPORT_ENTRY_FIRST(0x5b8d0b, public_5b8d0b)
        ASM_EXPORT_ENTRY(0x5b8d16, public_5b8d16)
        ASM_EXPORT_ENTRY(0x5b8d21, public_5b8d21)
        ASM_EXPORT_ENTRY_LAST(0x5b8d2c, public_5b8d2c)
    }
}

#undef public_5b8d0b
#undef public_5b8d16
#undef public_5b8d21
#undef public_5b8d2c

#pragma init_seg(compiler)
extern "C" void const* const public_5b8d0b = __AsmFindLabelExport(&internal_5b8d00, 0x5b8d0b);
extern "C" void const* const public_5b8d16 = __AsmFindLabelExport(&internal_5b8d00, 0x5b8d16);
extern "C" void const* const public_5b8d21 = __AsmFindLabelExport(&internal_5b8d00, 0x5b8d21);
extern "C" void const* const public_5b8d2c = __AsmFindLabelExport(&internal_5b8d00, 0x5b8d2c);
