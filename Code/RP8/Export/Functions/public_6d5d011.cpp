#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d01b _public_6d5d01b
#define public_6d5d025 _public_6d5d025

PROC_DECLARE(0x6d5d011, internal_6d5d011, public_6d5d011);
/* CHUNK of public_6d34f86 */
extern "C" NAKED register_t __cdecl internal_6d5d011()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x30]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d01b : nop
        push dword ptr ss : [ebp-0x30]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d025 : nop
        mov eax, offset public_6d629e0
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d011)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d01b, public_6d5d01b)
        ASM_EXPORT_ENTRY_LAST(0x6d5d025, public_6d5d025)
    }
}

#undef public_6d5d01b
#undef public_6d5d025

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d01b = __AsmFindLabelExport(&internal_6d5d011, 0x6d5d01b);
extern "C" void const* const public_6d5d025 = __AsmFindLabelExport(&internal_6d5d011, 0x6d5d025);
