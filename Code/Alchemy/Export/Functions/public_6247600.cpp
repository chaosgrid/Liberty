#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6209f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624760b _public_624760b
#define public_624761c _public_624761c

PROC_DECLARE(0x6247600, internal_6247600, public_6247600);
/* CHUNK of public_6208840 */
extern "C" NAKED register_t __cdecl internal_6247600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6209f30
        public_624760b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_624761c : nop
        mov eax, offset public_62503ec
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247600)
        ASM_EXPORT_ENTRY_FIRST(0x624760b, public_624760b)
        ASM_EXPORT_ENTRY_LAST(0x624761c, public_624761c)
    }
}

#undef public_624760b
#undef public_624761c

#pragma init_seg(compiler)
extern "C" void const* const public_624760b = __AsmFindLabelExport(&internal_6247600, 0x624760b);
extern "C" void const* const public_624761c = __AsmFindLabelExport(&internal_6247600, 0x624761c);
