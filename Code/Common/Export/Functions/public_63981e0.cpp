#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63981eb _public_63981eb

PROC_DECLARE(0x63981e0, internal_63981e0, public_63981e0);
/* CHUNK of public_635c090 */
extern "C" NAKED register_t __cdecl internal_63981e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_635d3b0
        public_63981eb : nop
        mov eax, offset public_63b2650
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63981e0)
        ASM_EXPORT_ENTRY_SINGLE(0x63981eb, public_63981eb)
    }
}

#undef public_63981eb

#pragma init_seg(compiler)
extern "C" void const* const public_63981eb = __AsmFindLabelExport(&internal_63981e0, 0x63981eb);
