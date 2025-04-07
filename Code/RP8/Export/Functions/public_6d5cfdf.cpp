#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5cfe9 _public_6d5cfe9

PROC_DECLARE(0x6d5cfdf, internal_6d5cfdf, public_6d5cfdf);
/* CHUNK of public_6d34c93 */
extern "C" NAKED register_t __cdecl internal_6d5cfdf()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5cfe9 : nop
        mov eax, offset public_6d62988
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5cfdf)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5cfe9, public_6d5cfe9)
    }
}

#undef public_6d5cfe9

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cfe9 = __AsmFindLabelExport(&internal_6d5cfdf, 0x6d5cfe9);
