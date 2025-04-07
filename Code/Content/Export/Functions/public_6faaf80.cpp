#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaf8b _public_6faaf8b

PROC_DECLARE(0x6faaf80, internal_6faaf80, public_6faaf80);
/* CHUNK of public_6eb8a20 */
extern "C" NAKED register_t __cdecl internal_6faaf80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6faaf8b : nop
        mov eax, offset public_6fbf3c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaf80)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaf8b, public_6faaf8b)
    }
}

#undef public_6faaf8b

#pragma init_seg(compiler)
extern "C" void const* const public_6faaf8b = __AsmFindLabelExport(&internal_6faaf80, 0x6faaf8b);
