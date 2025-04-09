#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf4c8 _public_5bf4c8

PROC_DECLARE(0x5bf4c0, internal_5bf4c0, public_5bf4c0);
/* CHUNK of public_4f7f70 */
extern "C" NAKED register_t __cdecl internal_5bf4c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4f8dd0
        public_5bf4c8 : nop
        mov eax, offset public_5f9438
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf4c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf4c8, public_5bf4c8)
    }
}

#undef public_5bf4c8

#pragma init_seg(compiler)
extern "C" void const* const public_5bf4c8 = __AsmFindLabelExport(&internal_5bf4c0, 0x5bf4c8);
