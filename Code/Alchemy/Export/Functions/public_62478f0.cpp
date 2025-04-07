#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62086e0);
CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62478f8 _public_62478f8
#define public_6247909 _public_6247909

PROC_DECLARE(0x62478f0, internal_62478f0, public_62478f0);
/* CHUNK of public_620c530 */
extern "C" NAKED register_t __cdecl internal_62478f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_62086e0
        public_62478f8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6247909 : nop
        mov eax, offset public_6250720
        jmp public_6246126
        UNREACHABLE_TRAP(0x62478f0)
        ASM_EXPORT_ENTRY_FIRST(0x62478f8, public_62478f8)
        ASM_EXPORT_ENTRY_LAST(0x6247909, public_6247909)
    }
}

#undef public_62478f8
#undef public_6247909

#pragma init_seg(compiler)
extern "C" void const* const public_62478f8 = __AsmFindLabelExport(&internal_62478f0, 0x62478f8);
extern "C" void const* const public_6247909 = __AsmFindLabelExport(&internal_62478f0, 0x6247909);
