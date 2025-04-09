#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1f7b _public_5c1f7b

PROC_DECLARE(0x5c1f70, internal_5c1f70, public_5c1f70);
/* CHUNK of public_565830 */
extern "C" NAKED register_t __cdecl internal_5c1f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_526a20
        public_5c1f7b : nop
        mov eax, offset public_5fc260
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1f70)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1f7b, public_5c1f7b)
    }
}

#undef public_5c1f7b

#pragma init_seg(compiler)
extern "C" void const* const public_5c1f7b = __AsmFindLabelExport(&internal_5c1f70, 0x5c1f7b);
