#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395818 _public_6395818

PROC_DECLARE(0x6395810, internal_6395810, public_6395810);
/* CHUNK of public_62f3e30 */
extern "C" NAKED register_t __cdecl internal_6395810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395818 : nop
        mov eax, offset public_63af484
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395810)
        ASM_EXPORT_ENTRY_SINGLE(0x6395818, public_6395818)
    }
}

#undef public_6395818

#pragma init_seg(compiler)
extern "C" void const* const public_6395818 = __AsmFindLabelExport(&internal_6395810, 0x6395818);
