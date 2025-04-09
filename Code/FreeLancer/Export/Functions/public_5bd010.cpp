#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd01b _public_5bd01b

PROC_DECLARE(0x5bd010, internal_5bd010, public_5bd010);
/* CHUNK of public_4b2950 */
extern "C" NAKED register_t __cdecl internal_5bd010()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd01b : nop
        mov eax, offset public_5f7294
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd010)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd01b, public_5bd01b)
    }
}

#undef public_5bd01b

#pragma init_seg(compiler)
extern "C" void const* const public_5bd01b = __AsmFindLabelExport(&internal_5bd010, 0x5bd01b);
