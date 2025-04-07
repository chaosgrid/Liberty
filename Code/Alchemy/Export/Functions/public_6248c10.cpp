#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248c1b _public_6248c1b

PROC_DECLARE(0x6248c10, internal_6248c10, public_6248c10);
/* CHUNK of public_6220d90 */
extern "C" NAKED register_t __cdecl internal_6248c10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6220a80
        public_6248c1b : nop
        mov eax, offset public_6251afc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248c10)
        ASM_EXPORT_ENTRY_SINGLE(0x6248c1b, public_6248c1b)
    }
}

#undef public_6248c1b

#pragma init_seg(compiler)
extern "C" void const* const public_6248c1b = __AsmFindLabelExport(&internal_6248c10, 0x6248c1b);
