#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf0d9 _public_5bf0d9
#define public_5bf0e1 _public_5bf0e1
#define public_5bf0e9 _public_5bf0e9

PROC_DECLARE(0x5bf0d0, internal_5bf0d0, public_5bf0d0);
/* CHUNK of public_4f1dd0 */
extern "C" NAKED register_t __cdecl internal_5bf0d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf0d9 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_5154f0
        public_5bf0e1 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_5154f0
        public_5bf0e9 : nop
        mov eax, offset public_5f903c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf0d0)
        ASM_EXPORT_ENTRY_FIRST(0x5bf0d9, public_5bf0d9)
        ASM_EXPORT_ENTRY(0x5bf0e1, public_5bf0e1)
        ASM_EXPORT_ENTRY_LAST(0x5bf0e9, public_5bf0e9)
    }
}

#undef public_5bf0d9
#undef public_5bf0e1
#undef public_5bf0e9

#pragma init_seg(compiler)
extern "C" void const* const public_5bf0d9 = __AsmFindLabelExport(&internal_5bf0d0, 0x5bf0d9);
extern "C" void const* const public_5bf0e1 = __AsmFindLabelExport(&internal_5bf0d0, 0x5bf0e1);
extern "C" void const* const public_5bf0e9 = __AsmFindLabelExport(&internal_5bf0d0, 0x5bf0e9);
