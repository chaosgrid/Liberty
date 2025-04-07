#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf7e1 _public_6faf7e1

PROC_DECLARE(0x6faf7d0, internal_6faf7d0, public_6faf7d0);
/* CHUNK of public_6f58d70 */
extern "C" NAKED register_t __cdecl internal_6faf7d0()
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
        public_6faf7e1 : nop
        mov eax, offset public_6fc479c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf7d0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faf7e1, public_6faf7e1)
    }
}

#undef public_6faf7e1

#pragma init_seg(compiler)
extern "C" void const* const public_6faf7e1 = __AsmFindLabelExport(&internal_6faf7d0, 0x6faf7e1);
