#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafcf1 _public_6fafcf1

PROC_DECLARE(0x6fafce0, internal_6fafce0, public_6fafce0);
/* CHUNK of public_6f6a6a0 */
extern "C" NAKED register_t __cdecl internal_6fafce0()
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
        public_6fafcf1 : nop
        mov eax, offset public_6fc4e10
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafce0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fafcf1, public_6fafcf1)
    }
}

#undef public_6fafcf1

#pragma init_seg(compiler)
extern "C" void const* const public_6fafcf1 = __AsmFindLabelExport(&internal_6fafce0, 0x6fafcf1);
