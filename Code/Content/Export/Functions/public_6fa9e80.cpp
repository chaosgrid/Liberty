#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9e88 _public_6fa9e88
#define public_6fa9e93 _public_6fa9e93

PROC_DECLARE(0x6fa9e80, internal_6fa9e80, public_6fa9e80);
/* CHUNK of public_6eae320 */
extern "C" NAKED register_t __cdecl internal_6fa9e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f15350
        public_6fa9e88 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_6ead720
        public_6fa9e93 : nop
        mov eax, offset public_6fbe268
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9e80)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9e88, public_6fa9e88)
        ASM_EXPORT_ENTRY_LAST(0x6fa9e93, public_6fa9e93)
    }
}

#undef public_6fa9e88
#undef public_6fa9e93

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9e88 = __AsmFindLabelExport(&internal_6fa9e80, 0x6fa9e88);
extern "C" void const* const public_6fa9e93 = __AsmFindLabelExport(&internal_6fa9e80, 0x6fa9e93);
