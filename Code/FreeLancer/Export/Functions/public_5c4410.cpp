#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c441b _public_5c441b

PROC_DECLARE(0x5c4410, internal_5c4410, public_5c4410);
/* CHUNK of public_587160 */
extern "C" NAKED register_t __cdecl internal_5c4410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c441b : nop
        mov eax, offset public_5fe030
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4410)
        ASM_EXPORT_ENTRY_SINGLE(0x5c441b, public_5c441b)
    }
}

#undef public_5c441b

#pragma init_seg(compiler)
extern "C" void const* const public_5c441b = __AsmFindLabelExport(&internal_5c4410, 0x5c441b);
