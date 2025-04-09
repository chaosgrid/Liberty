#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfdd8 _public_5bfdd8

PROC_DECLARE(0x5bfdd0, internal_5bfdd0, public_5bfdd0);
/* CHUNK of public_516bb0 */
extern "C" NAKED register_t __cdecl internal_5bfdd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5bfdd8 : nop
        mov eax, offset public_5f9d34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfdd0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfdd8, public_5bfdd8)
    }
}

#undef public_5bfdd8

#pragma init_seg(compiler)
extern "C" void const* const public_5bfdd8 = __AsmFindLabelExport(&internal_5bfdd0, 0x5bfdd8);
