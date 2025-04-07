#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d0a7 _public_6d5d0a7
#define public_6d5d0b1 _public_6d5d0b1

PROC_DECLARE(0x6d5d09d, internal_6d5d09d, public_6d5d09d);
/* CHUNK of public_6d35f25 */
extern "C" NAKED register_t __cdecl internal_6d5d09d()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x44]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0a7 : nop
        push dword ptr ss : [ebp-0x30]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d0b1 : nop
        mov eax, offset public_6d62aa0
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d09d)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d0a7, public_6d5d0a7)
        ASM_EXPORT_ENTRY_LAST(0x6d5d0b1, public_6d5d0b1)
    }
}

#undef public_6d5d0a7
#undef public_6d5d0b1

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d0a7 = __AsmFindLabelExport(&internal_6d5d09d, 0x6d5d0a7);
extern "C" void const* const public_6d5d0b1 = __AsmFindLabelExport(&internal_6d5d09d, 0x6d5d0b1);
