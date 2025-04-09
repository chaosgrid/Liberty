#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9d2b _public_5b9d2b

PROC_DECLARE(0x5b9d20, internal_5b9d20, public_5b9d20);
/* CHUNK of public_44d9b0 */
extern "C" NAKED register_t __cdecl internal_5b9d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9d2b : nop
        mov eax, offset public_5f3f08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9d20)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9d2b, public_5b9d2b)
    }
}

#undef public_5b9d2b

#pragma init_seg(compiler)
extern "C" void const* const public_5b9d2b = __AsmFindLabelExport(&internal_5b9d20, 0x5b9d2b);
