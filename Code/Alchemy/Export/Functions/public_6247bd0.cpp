#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247bd8 _public_6247bd8

PROC_DECLARE(0x6247bd0, internal_6247bd0, public_6247bd0);
/* CHUNK of public_620f4e0 */
extern "C" NAKED register_t __cdecl internal_6247bd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6247bd8 : nop
        mov eax, offset public_62509dc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247bd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6247bd8, public_6247bd8)
    }
}

#undef public_6247bd8

#pragma init_seg(compiler)
extern "C" void const* const public_6247bd8 = __AsmFindLabelExport(&internal_6247bd0, 0x6247bd8);
