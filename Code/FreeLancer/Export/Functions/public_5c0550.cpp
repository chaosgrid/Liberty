#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c055b _public_5c055b
#define public_5c0569 _public_5c0569

PROC_DECLARE(0x5c0550, internal_5c0550, public_5c0550);
/* CHUNK of public_52ec40 */
extern "C" NAKED register_t __cdecl internal_5c0550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x88]
        jmp public_531af0
        public_5c055b : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x10
        jmp public_502d90
        public_5c0569 : nop
        mov eax, offset public_5fa648
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0550)
        ASM_EXPORT_ENTRY_FIRST(0x5c055b, public_5c055b)
        ASM_EXPORT_ENTRY_LAST(0x5c0569, public_5c0569)
    }
}

#undef public_5c055b
#undef public_5c0569

#pragma init_seg(compiler)
extern "C" void const* const public_5c055b = __AsmFindLabelExport(&internal_5c0550, 0x5c055b);
extern "C" void const* const public_5c0569 = __AsmFindLabelExport(&internal_5c0550, 0x5c0569);
