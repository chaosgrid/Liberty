#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4afb _public_5c4afb

PROC_DECLARE(0x5c4af0, internal_5c4af0, public_5c4af0);
/* CHUNK of public_597ab0 */
extern "C" NAKED register_t __cdecl internal_5c4af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4afb : nop
        mov eax, offset public_5fe7e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4af0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4afb, public_5c4afb)
    }
}

#undef public_5c4afb

#pragma init_seg(compiler)
extern "C" void const* const public_5c4afb = __AsmFindLabelExport(&internal_5c4af0, 0x5c4afb);
