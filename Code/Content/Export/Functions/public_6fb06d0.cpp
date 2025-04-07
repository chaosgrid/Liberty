#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb06d8 _public_6fb06d8
#define public_6fb06e0 _public_6fb06e0
#define public_6fb06e8 _public_6fb06e8

PROC_DECLARE(0x6fb06d0, internal_6fb06d0, public_6fb06d0);
/* CHUNK of public_6f7fea0 */
extern "C" NAKED register_t __cdecl internal_6fb06d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0x78]
        jmp public_6eb7d10
        public_6fb06d8 : nop
        lea ecx, ss:[ebp+0x40]
        jmp public_6eb7d10
        public_6fb06e0 : nop
        lea ecx, ss:[ebp+8]
        jmp public_6eb7d10
        public_6fb06e8 : nop
        mov eax, offset public_6fc59b0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb06d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb06d8, public_6fb06d8)
        ASM_EXPORT_ENTRY(0x6fb06e0, public_6fb06e0)
        ASM_EXPORT_ENTRY_LAST(0x6fb06e8, public_6fb06e8)
    }
}

#undef public_6fb06d8
#undef public_6fb06e0
#undef public_6fb06e8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb06d8 = __AsmFindLabelExport(&internal_6fb06d0, 0x6fb06d8);
extern "C" void const* const public_6fb06e0 = __AsmFindLabelExport(&internal_6fb06d0, 0x6fb06e0);
extern "C" void const* const public_6fb06e8 = __AsmFindLabelExport(&internal_6fb06d0, 0x6fb06e8);
