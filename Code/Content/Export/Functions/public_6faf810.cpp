#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf821 _public_6faf821

PROC_DECLARE(0x6faf810, internal_6faf810, public_6faf810);
/* CHUNK of public_6f5a1b0 */
extern "C" NAKED register_t __cdecl internal_6faf810()
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
        public_6faf821 : nop
        mov eax, offset public_6fc47ec
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf810)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf821, public_6faf821)
    }
}

#undef public_6faf821

#pragma init_seg(compiler)
extern "C" void const* const public_6faf821 = __AsmFindLabelExport(&internal_6faf810, 0x6faf821);
