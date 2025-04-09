#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9f1b _public_5b9f1b

PROC_DECLARE(0x5b9f10, internal_5b9f10, public_5b9f10);
/* CHUNK of public_454820 */
extern "C" NAKED register_t __cdecl internal_5b9f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9f1b : nop
        mov eax, offset public_5f4250
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9f10)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9f1b, public_5b9f1b)
    }
}

#undef public_5b9f1b

#pragma init_seg(compiler)
extern "C" void const* const public_5b9f1b = __AsmFindLabelExport(&internal_5b9f10, 0x5b9f1b);
