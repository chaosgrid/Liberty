#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb217b _public_6fb217b

PROC_DECLARE(0x6fb2170, internal_6fb2170, public_6fb2170);
/* CHUNK of public_6fa6760 */
extern "C" NAKED register_t __cdecl internal_6fb2170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb217b : nop
        mov eax, offset public_6fc7770
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2170)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb217b, public_6fb217b)
    }
}

#undef public_6fb217b

#pragma init_seg(compiler)
extern "C" void const* const public_6fb217b = __AsmFindLabelExport(&internal_6fb2170, 0x6fb217b);
