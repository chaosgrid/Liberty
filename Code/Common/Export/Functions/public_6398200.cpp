#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639820b _public_639820b

PROC_DECLARE(0x6398200, internal_6398200, public_6398200);
/* CHUNK of public_635c2c0 */
extern "C" NAKED register_t __cdecl internal_6398200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x18
        jmp public_63449d0
        public_639820b : nop
        mov eax, offset public_63b2678
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398200)
        ASM_EXPORT_ENTRY_SINGLE(0x639820b, public_639820b)
    }
}

#undef public_639820b

#pragma init_seg(compiler)
extern "C" void const* const public_639820b = __AsmFindLabelExport(&internal_6398200, 0x639820b);
