#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf3d9 _public_5bf3d9

PROC_DECLARE(0x5bf3d0, internal_5bf3d0, public_5bf3d0);
/* CHUNK of public_4f6200 */
extern "C" NAKED register_t __cdecl internal_5bf3d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5bf3d9 : nop
        mov eax, offset public_5f931c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf3d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf3d9, public_5bf3d9)
    }
}

#undef public_5bf3d9

#pragma init_seg(compiler)
extern "C" void const* const public_5bf3d9 = __AsmFindLabelExport(&internal_5bf3d0, 0x5bf3d9);
