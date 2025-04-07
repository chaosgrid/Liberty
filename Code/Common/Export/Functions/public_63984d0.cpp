#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63984d8 _public_63984d8

PROC_DECLARE(0x63984d0, internal_63984d0, public_63984d0);
/* CHUNK of public_6362360 */
extern "C" NAKED register_t __cdecl internal_63984d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_635d440
        public_63984d8 : nop
        mov eax, offset public_63b2b00
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63984d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63984d8, public_63984d8)
    }
}

#undef public_63984d8

#pragma init_seg(compiler)
extern "C" void const* const public_63984d8 = __AsmFindLabelExport(&internal_63984d0, 0x63984d8);
