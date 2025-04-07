#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1571 _public_6fb1571

PROC_DECLARE(0x6fb1560, internal_6fb1560, public_6fb1560);
/* CHUNK of public_6f92440 */
extern "C" NAKED register_t __cdecl internal_6fb1560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb1571 : nop
        mov eax, offset public_6fc6aa4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1560)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1571, public_6fb1571)
    }
}

#undef public_6fb1571

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1571 = __AsmFindLabelExport(&internal_6fb1560, 0x6fb1571);
