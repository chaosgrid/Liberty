#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9d4b _public_5b9d4b

PROC_DECLARE(0x5b9d40, internal_5b9d40, public_5b9d40);
/* CHUNK of public_44d630 */
extern "C" NAKED register_t __cdecl internal_5b9d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9d4b : nop
        mov eax, offset public_5f3f50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9d40)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9d4b, public_5b9d4b)
    }
}

#undef public_5b9d4b

#pragma init_seg(compiler)
extern "C" void const* const public_5b9d4b = __AsmFindLabelExport(&internal_5b9d40, 0x5b9d4b);
