#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b884b _public_5b884b

PROC_DECLARE(0x5b8840, internal_5b8840, public_5b8840);
/* CHUNK of public_4147a0 */
extern "C" NAKED register_t __cdecl internal_5b8840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_444e20
        public_5b884b : nop
        mov eax, offset public_5f2678
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8840)
        ASM_EXPORT_ENTRY_SINGLE(0x5b884b, public_5b884b)
    }
}

#undef public_5b884b

#pragma init_seg(compiler)
extern "C" void const* const public_5b884b = __AsmFindLabelExport(&internal_5b8840, 0x5b884b);
