#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb6e8 _public_5bb6e8

PROC_DECLARE(0x5bb6e0, internal_5bb6e0, public_5bb6e0);
/* CHUNK of public_469d20 */
extern "C" NAKED register_t __cdecl internal_5bb6e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_469c60
        public_5bb6e8 : nop
        mov eax, offset public_5f58e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb6e0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb6e8, public_5bb6e8)
    }
}

#undef public_5bb6e8

#pragma init_seg(compiler)
extern "C" void const* const public_5bb6e8 = __AsmFindLabelExport(&internal_5bb6e0, 0x5bb6e8);
