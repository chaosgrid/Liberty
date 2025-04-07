#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aa5b _public_624aa5b

PROC_DECLARE(0x624aa50, internal_624aa50, public_624aa50);
/* CHUNK of public_6244710 */
extern "C" NAKED register_t __cdecl internal_624aa50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209ea0
        public_624aa5b : nop
        mov eax, offset public_6253af8
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aa50)
        ASM_EXPORT_ENTRY_SINGLE(0x624aa5b, public_624aa5b)
    }
}

#undef public_624aa5b

#pragma init_seg(compiler)
extern "C" void const* const public_624aa5b = __AsmFindLabelExport(&internal_624aa50, 0x624aa5b);
