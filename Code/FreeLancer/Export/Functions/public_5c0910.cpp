#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52aad0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0918 _public_5c0918

PROC_DECLARE(0x5c0910, internal_5c0910, public_5c0910);
/* CHUNK of public_534240 */
extern "C" NAKED register_t __cdecl internal_5c0910()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_52aad0
        public_5c0918 : nop
        mov eax, offset public_5faafc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0910)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0918, public_5c0918)
    }
}

#undef public_5c0918

#pragma init_seg(compiler)
extern "C" void const* const public_5c0918 = __AsmFindLabelExport(&internal_5c0910, 0x5c0918);
