#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd898 _public_5bd898

PROC_DECLARE(0x5bd890, internal_5bd890, public_5bd890);
/* CHUNK of public_4c9060 */
extern "C" NAKED register_t __cdecl internal_5bd890()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5bd898 : nop
        mov eax, offset public_5f7cf8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd890)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd898, public_5bd898)
    }
}

#undef public_5bd898

#pragma init_seg(compiler)
extern "C" void const* const public_5bd898 = __AsmFindLabelExport(&internal_5bd890, 0x5bd898);
