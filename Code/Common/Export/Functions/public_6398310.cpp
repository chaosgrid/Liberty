#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639831b _public_639831b

PROC_DECLARE(0x6398310, internal_6398310, public_6398310);
/* CHUNK of public_63605e0 */
extern "C" NAKED register_t __cdecl internal_6398310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        jmp public_63449d0
        public_639831b : nop
        mov eax, offset public_63b27f0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398310)
        ASM_EXPORT_ENTRY_SINGLE(0x639831b, public_639831b)
    }
}

#undef public_639831b

#pragma init_seg(compiler)
extern "C" void const* const public_639831b = __AsmFindLabelExport(&internal_6398310, 0x639831b);
