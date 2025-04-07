#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb066b _public_6fb066b
#define public_6fb0676 _public_6fb0676
#define public_6fb067e _public_6fb067e
#define public_6fb0686 _public_6fb0686

PROC_DECLARE(0x6fb0660, internal_6fb0660, public_6fb0660);
/* CHUNK of public_6f7f990 */
extern "C" NAKED register_t __cdecl internal_6fb0660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x88]
        jmp public_6eb7d10
        public_6fb066b : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        jmp public_6eb7d10
        public_6fb0676 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_6eb7d10
        public_6fb067e : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6eb7d10
        public_6fb0686 : nop
        mov eax, offset public_6fc592c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0660)
        ASM_EXPORT_ENTRY_FIRST(0x6fb066b, public_6fb066b)
        ASM_EXPORT_ENTRY(0x6fb0676, public_6fb0676)
        ASM_EXPORT_ENTRY(0x6fb067e, public_6fb067e)
        ASM_EXPORT_ENTRY_LAST(0x6fb0686, public_6fb0686)
    }
}

#undef public_6fb066b
#undef public_6fb0676
#undef public_6fb067e
#undef public_6fb0686

#pragma init_seg(compiler)
extern "C" void const* const public_6fb066b = __AsmFindLabelExport(&internal_6fb0660, 0x6fb066b);
extern "C" void const* const public_6fb0676 = __AsmFindLabelExport(&internal_6fb0660, 0x6fb0676);
extern "C" void const* const public_6fb067e = __AsmFindLabelExport(&internal_6fb0660, 0x6fb067e);
extern "C" void const* const public_6fb0686 = __AsmFindLabelExport(&internal_6fb0660, 0x6fb0686);
