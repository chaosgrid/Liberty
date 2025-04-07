#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf731 _public_6faf731

PROC_DECLARE(0x6faf720, internal_6faf720, public_6faf720);
/* CHUNK of public_6f56e70 */
extern "C" NAKED register_t __cdecl internal_6faf720()
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
        public_6faf731 : nop
        mov eax, offset public_6fc4680
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf720)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf731, public_6faf731)
    }
}

#undef public_6faf731

#pragma init_seg(compiler)
extern "C" void const* const public_6faf731 = __AsmFindLabelExport(&internal_6faf720, 0x6faf731);
