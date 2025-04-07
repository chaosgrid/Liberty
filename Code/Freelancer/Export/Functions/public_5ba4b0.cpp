#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba4bb _public_5ba4bb

PROC_DECLARE(0x5ba4b0, internal_5ba4b0, public_5ba4b0);
/* CHUNK of public_45f860 */
extern "C" NAKED register_t __cdecl internal_5ba4b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x64]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5ba4bb : nop
        mov eax, offset public_5f48b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba4b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba4bb, public_5ba4bb)
    }
}

#undef public_5ba4bb

#pragma init_seg(compiler)
extern "C" void const* const public_5ba4bb = __AsmFindLabelExport(&internal_5ba4b0, 0x5ba4bb);
