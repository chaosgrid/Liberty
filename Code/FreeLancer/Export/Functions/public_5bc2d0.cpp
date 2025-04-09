#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc2d8 _public_5bc2d8

PROC_DECLARE(0x5bc2d0, internal_5bc2d0, public_5bc2d0);
/* CHUNK of public_48a440 */
extern "C" NAKED register_t __cdecl internal_5bc2d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc2d8 : nop
        mov eax, offset public_5f66f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc2d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc2d8, public_5bc2d8)
    }
}

#undef public_5bc2d8

#pragma init_seg(compiler)
extern "C" void const* const public_5bc2d8 = __AsmFindLabelExport(&internal_5bc2d0, 0x5bc2d8);
