#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac571 _public_6fac571

PROC_DECLARE(0x6fac560, internal_6fac560, public_6fac560);
/* CHUNK of public_6ef8060 */
extern "C" NAKED register_t __cdecl internal_6fac560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac571 : nop
        mov eax, offset public_6fc11d0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac560)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac571, public_6fac571)
    }
}

#undef public_6fac571

#pragma init_seg(compiler)
extern "C" void const* const public_6fac571 = __AsmFindLabelExport(&internal_6fac560, 0x6fac571);
