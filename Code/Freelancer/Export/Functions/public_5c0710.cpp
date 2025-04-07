#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0718 _public_5c0718
#define public_5c0720 _public_5c0720

PROC_DECLARE(0x5c0710, internal_5c0710, public_5c0710);
/* CHUNK of public_531f30 */
extern "C" NAKED register_t __cdecl internal_5c0710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0718 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_526a20
        public_5c0720 : nop
        mov eax, offset public_5fa890
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0710)
        ASM_EXPORT_ENTRY_FIRST(0x5c0718, public_5c0718)
        ASM_EXPORT_ENTRY_LAST(0x5c0720, public_5c0720)
    }
}

#undef public_5c0718
#undef public_5c0720

#pragma init_seg(compiler)
extern "C" void const* const public_5c0718 = __AsmFindLabelExport(&internal_5c0710, 0x5c0718);
extern "C" void const* const public_5c0720 = __AsmFindLabelExport(&internal_5c0710, 0x5c0720);
