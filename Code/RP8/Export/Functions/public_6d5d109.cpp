#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d113 _public_6d5d113

PROC_DECLARE(0x6d5d109, internal_6d5d109, public_6d5d109);
/* CHUNK of public_6d37d51 */
extern "C" NAKED register_t __cdecl internal_6d5d109()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d113 : nop
        mov eax, offset public_6d62b40
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d109)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5d113, public_6d5d113)
    }
}

#undef public_6d5d113

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d113 = __AsmFindLabelExport(&internal_6d5d109, 0x6d5d113);
