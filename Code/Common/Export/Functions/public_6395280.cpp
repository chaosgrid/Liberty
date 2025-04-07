#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395288 _public_6395288

PROC_DECLARE(0x6395280, internal_6395280, public_6395280);
/* CHUNK of public_62d94b0 */
extern "C" NAKED register_t __cdecl internal_6395280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395288 : nop
        mov eax, offset public_63aed30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395280)
        ASM_EXPORT_ENTRY_SINGLE(0x6395288, public_6395288)
    }
}

#undef public_6395288

#pragma init_seg(compiler)
extern "C" void const* const public_6395288 = __AsmFindLabelExport(&internal_6395280, 0x6395288);
