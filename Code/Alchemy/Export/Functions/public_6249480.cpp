#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249488 _public_6249488

PROC_DECLARE(0x6249480, internal_6249480, public_6249480);
/* CHUNK of public_622bb10 */
extern "C" NAKED register_t __cdecl internal_6249480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6249488 : nop
        mov eax, offset public_62523e4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249480)
        ASM_EXPORT_ENTRY_SINGLE(0x6249488, public_6249488)
    }
}

#undef public_6249488

#pragma init_seg(compiler)
extern "C" void const* const public_6249488 = __AsmFindLabelExport(&internal_6249480, 0x6249488);
