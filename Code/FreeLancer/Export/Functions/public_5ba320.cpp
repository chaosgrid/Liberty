#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba328 _public_5ba328

PROC_DECLARE(0x5ba320, internal_5ba320, public_5ba320);
/* CHUNK of public_45b820 */
extern "C" NAKED register_t __cdecl internal_5ba320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5ba328 : nop
        mov eax, offset public_5f470c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba320)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba328, public_5ba328)
    }
}

#undef public_5ba328

#pragma init_seg(compiler)
extern "C" void const* const public_5ba328 = __AsmFindLabelExport(&internal_5ba320, 0x5ba328);
