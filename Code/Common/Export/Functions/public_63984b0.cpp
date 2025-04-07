#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345300);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63984b8 _public_63984b8

PROC_DECLARE(0x63984b0, internal_63984b0, public_63984b0);
/* CHUNK of public_6362280 */
extern "C" NAKED register_t __cdecl internal_63984b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6345300
        public_63984b8 : nop
        mov eax, offset public_63b2ab0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63984b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63984b8, public_63984b8)
    }
}

#undef public_63984b8

#pragma init_seg(compiler)
extern "C" void const* const public_63984b8 = __AsmFindLabelExport(&internal_63984b0, 0x63984b8);
