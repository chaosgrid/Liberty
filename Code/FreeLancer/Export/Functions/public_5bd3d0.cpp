#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd3d8 _public_5bd3d8

PROC_DECLARE(0x5bd3d0, internal_5bd3d0, public_5bd3d0);
/* CHUNK of public_4bb1e0 */
extern "C" NAKED register_t __cdecl internal_5bd3d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bd3d8 : nop
        mov eax, offset public_5f7704
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd3d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd3d8, public_5bd3d8)
    }
}

#undef public_5bd3d8

#pragma init_seg(compiler)
extern "C" void const* const public_5bd3d8 = __AsmFindLabelExport(&internal_5bd3d0, 0x5bd3d8);
