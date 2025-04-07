#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9dc8 _public_6fa9dc8
#define public_6fa9dd3 _public_6fa9dd3

PROC_DECLARE(0x6fa9dc0, internal_6fa9dc0, public_6fa9dc0);
/* CHUNK of public_6eacef0 */
extern "C" NAKED register_t __cdecl internal_6fa9dc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fa9dc8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_6ead720
        public_6fa9dd3 : nop
        mov eax, offset public_6fbe148
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9dc0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9dc8, public_6fa9dc8)
        ASM_EXPORT_ENTRY_LAST(0x6fa9dd3, public_6fa9dd3)
    }
}

#undef public_6fa9dc8
#undef public_6fa9dd3

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9dc8 = __AsmFindLabelExport(&internal_6fa9dc0, 0x6fa9dc8);
extern "C" void const* const public_6fa9dd3 = __AsmFindLabelExport(&internal_6fa9dc0, 0x6fa9dd3);
