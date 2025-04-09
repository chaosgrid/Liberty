#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3d68 _public_5c3d68

PROC_DECLARE(0x5c3d60, internal_5c3d60, public_5c3d60);
/* CHUNK of public_57b470 */
extern "C" NAKED register_t __cdecl internal_5c3d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5c3d68 : nop
        mov eax, offset public_5fda38
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3d60)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3d68, public_5c3d68)
    }
}

#undef public_5c3d68

#pragma init_seg(compiler)
extern "C" void const* const public_5c3d68 = __AsmFindLabelExport(&internal_5c3d60, 0x5c3d68);
