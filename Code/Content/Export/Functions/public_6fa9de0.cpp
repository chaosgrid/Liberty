#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9de8 _public_6fa9de8
#define public_6fa9df3 _public_6fa9df3

PROC_DECLARE(0x6fa9de0, internal_6fa9de0, public_6fa9de0);
/* CHUNK of public_6eacf80 */
extern "C" NAKED register_t __cdecl internal_6fa9de0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fa9de8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_6ead720
        public_6fa9df3 : nop
        mov eax, offset public_6fbe174
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9de0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9de8, public_6fa9de8)
        ASM_EXPORT_ENTRY_LAST(0x6fa9df3, public_6fa9df3)
    }
}

#undef public_6fa9de8
#undef public_6fa9df3

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9de8 = __AsmFindLabelExport(&internal_6fa9de0, 0x6fa9de8);
extern "C" void const* const public_6fa9df3 = __AsmFindLabelExport(&internal_6fa9de0, 0x6fa9df3);
