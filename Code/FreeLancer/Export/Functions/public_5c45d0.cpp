#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c45d8 _public_5c45d8
#define public_5c45e0 _public_5c45e0
#define public_5c45e8 _public_5c45e8
#define public_5c45f0 _public_5c45f0
#define public_5c45f8 _public_5c45f8

PROC_DECLARE(0x5c45d0, internal_5c45d0, public_5c45d0);
/* CHUNK of public_58b7a0 */
extern "C" NAKED register_t __cdecl internal_5c45d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_444e20
        public_5c45d8 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_444e20
        public_5c45e0 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_444e20
        public_5c45e8 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_444e20
        public_5c45f0 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_444e20
        public_5c45f8 : nop
        mov eax, offset public_5fe26c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c45d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c45d8, public_5c45d8)
        ASM_EXPORT_ENTRY(0x5c45e0, public_5c45e0)
        ASM_EXPORT_ENTRY(0x5c45e8, public_5c45e8)
        ASM_EXPORT_ENTRY(0x5c45f0, public_5c45f0)
        ASM_EXPORT_ENTRY_LAST(0x5c45f8, public_5c45f8)
    }
}

#undef public_5c45d8
#undef public_5c45e0
#undef public_5c45e8
#undef public_5c45f0
#undef public_5c45f8

#pragma init_seg(compiler)
extern "C" void const* const public_5c45d8 = __AsmFindLabelExport(&internal_5c45d0, 0x5c45d8);
extern "C" void const* const public_5c45e0 = __AsmFindLabelExport(&internal_5c45d0, 0x5c45e0);
extern "C" void const* const public_5c45e8 = __AsmFindLabelExport(&internal_5c45d0, 0x5c45e8);
extern "C" void const* const public_5c45f0 = __AsmFindLabelExport(&internal_5c45d0, 0x5c45f0);
extern "C" void const* const public_5c45f8 = __AsmFindLabelExport(&internal_5c45d0, 0x5c45f8);
