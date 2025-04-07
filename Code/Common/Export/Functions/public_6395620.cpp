#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395628 _public_6395628

PROC_DECLARE(0x6395620, internal_6395620, public_6395620);
/* CHUNK of public_62f1830 */
extern "C" NAKED register_t __cdecl internal_6395620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_626c930
        public_6395628 : nop
        mov eax, offset public_63af0f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395620)
        ASM_EXPORT_ENTRY_SINGLE(0x6395628, public_6395628)
    }
}

#undef public_6395628

#pragma init_seg(compiler)
extern "C" void const* const public_6395628 = __AsmFindLabelExport(&internal_6395620, 0x6395628);
