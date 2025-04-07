#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639712b _public_639712b

PROC_DECLARE(0x6397120, internal_6397120, public_6397120);
/* CHUNK of public_6324e90 */
extern "C" NAKED register_t __cdecl internal_6397120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_62a68e0
        public_639712b : nop
        mov eax, offset public_63b11f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397120)
        ASM_EXPORT_ENTRY_SINGLE(0x639712b, public_639712b)
    }
}

#undef public_639712b

#pragma init_seg(compiler)
extern "C" void const* const public_639712b = __AsmFindLabelExport(&internal_6397120, 0x639712b);
