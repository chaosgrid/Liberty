#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafa58 _public_6fafa58
#define public_6fafa60 _public_6fafa60
#define public_6fafa68 _public_6fafa68

PROC_DECLARE(0x6fafa50, internal_6fafa50, public_6fafa50);
/* CHUNK of public_6f5fb90 */
extern "C" NAKED register_t __cdecl internal_6fafa50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f15350
        public_6fafa58 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6f15350
        public_6fafa60 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp public_6f15350
        public_6fafa68 : nop
        mov eax, offset public_6fc4a9c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafa50)
        ASM_EXPORT_ENTRY_FIRST(0x6fafa58, public_6fafa58)
        ASM_EXPORT_ENTRY(0x6fafa60, public_6fafa60)
        ASM_EXPORT_ENTRY_LAST(0x6fafa68, public_6fafa68)
    }
}

#undef public_6fafa58
#undef public_6fafa60
#undef public_6fafa68

#pragma init_seg(compiler)
extern "C" void const* const public_6fafa58 = __AsmFindLabelExport(&internal_6fafa50, 0x6fafa58);
extern "C" void const* const public_6fafa60 = __AsmFindLabelExport(&internal_6fafa50, 0x6fafa60);
extern "C" void const* const public_6fafa68 = __AsmFindLabelExport(&internal_6fafa50, 0x6fafa68);
