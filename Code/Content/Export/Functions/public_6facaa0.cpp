#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facaa8 _public_6facaa8
#define public_6facab3 _public_6facab3

PROC_DECLARE(0x6facaa0, internal_6facaa0, public_6facaa0);
/* CHUNK of public_6efff70 */
extern "C" NAKED register_t __cdecl internal_6facaa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f28e10
        public_6facaa8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6facab3 : nop
        mov eax, offset public_6fc1738
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facaa0)
        ASM_EXPORT_ENTRY_FIRST(0x6facaa8, public_6facaa8)
        ASM_EXPORT_ENTRY_LAST(0x6facab3, public_6facab3)
    }
}

#undef public_6facaa8
#undef public_6facab3

#pragma init_seg(compiler)
extern "C" void const* const public_6facaa8 = __AsmFindLabelExport(&internal_6facaa0, 0x6facaa8);
extern "C" void const* const public_6facab3 = __AsmFindLabelExport(&internal_6facaa0, 0x6facab3);
