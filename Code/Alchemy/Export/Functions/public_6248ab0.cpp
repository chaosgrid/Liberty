#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248abb _public_6248abb

PROC_DECLARE(0x6248ab0, internal_6248ab0, public_6248ab0);
/* CHUNK of public_621ed80 */
extern "C" NAKED register_t __cdecl internal_6248ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6220a80
        public_6248abb : nop
        mov eax, offset public_6251964
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ab0)
        ASM_EXPORT_ENTRY_SINGLE(0x6248abb, public_6248abb)
    }
}

#undef public_6248abb

#pragma init_seg(compiler)
extern "C" void const* const public_6248abb = __AsmFindLabelExport(&internal_6248ab0, 0x6248abb);
