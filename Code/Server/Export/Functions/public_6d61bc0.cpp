#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61bcb _public_6d61bcb

PROC_DECLARE(0x6d61bc0, internal_6d61bc0, public_6d61bc0);
/* CHUNK of public_6d12b30 */
extern "C" NAKED register_t __cdecl internal_6d61bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61bcb : nop
        mov eax, offset public_6d72894
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61bcb, public_6d61bcb)
    }
}

#undef public_6d61bcb

#pragma init_seg(compiler)
extern "C" void const* const public_6d61bcb = __AsmFindLabelExport(&internal_6d61bc0, 0x6d61bcb);
