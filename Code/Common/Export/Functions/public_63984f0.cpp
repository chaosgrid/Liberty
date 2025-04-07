#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345300);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63984f8 _public_63984f8

PROC_DECLARE(0x63984f0, internal_63984f0, public_63984f0);
/* CHUNK of public_6362570 */
extern "C" NAKED register_t __cdecl internal_63984f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6345300
        public_63984f8 : nop
        mov eax, offset public_63b2b28
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63984f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63984f8, public_63984f8)
    }
}

#undef public_63984f8

#pragma init_seg(compiler)
extern "C" void const* const public_63984f8 = __AsmFindLabelExport(&internal_63984f0, 0x63984f8);
