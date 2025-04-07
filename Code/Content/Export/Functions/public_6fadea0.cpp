#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadeb1 _public_6fadeb1
#define public_6fadeb9 _public_6fadeb9

PROC_DECLARE(0x6fadea0, internal_6fadea0, public_6fadea0);
/* CHUNK of public_6f224f0 */
extern "C" NAKED register_t __cdecl internal_6fadea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fadeb1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fadeb9 : nop
        mov eax, offset public_6fc2e28
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadea0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadeb1, public_6fadeb1)
        ASM_EXPORT_ENTRY_LAST(0x6fadeb9, public_6fadeb9)
    }
}

#undef public_6fadeb1
#undef public_6fadeb9

#pragma init_seg(compiler)
extern "C" void const* const public_6fadeb1 = __AsmFindLabelExport(&internal_6fadea0, 0x6fadeb1);
extern "C" void const* const public_6fadeb9 = __AsmFindLabelExport(&internal_6fadea0, 0x6fadeb9);
