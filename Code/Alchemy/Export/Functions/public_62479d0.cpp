#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6208910);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62479d8 _public_62479d8
#define public_62479e9 _public_62479e9

PROC_DECLARE(0x62479d0, internal_62479d0, public_62479d0);
/* CHUNK of public_620cbb0 */
extern "C" NAKED register_t __cdecl internal_62479d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6208910
        public_62479d8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_62479e9 : nop
        mov eax, offset public_6250808
        jmp public_6246126
        UNREACHABLE_TRAP(0x62479d0)
        ASM_EXPORT_ENTRY_FIRST(0x62479d8, public_62479d8)
        ASM_EXPORT_ENTRY_LAST(0x62479e9, public_62479e9)
    }
}

#undef public_62479d8
#undef public_62479e9

#pragma init_seg(compiler)
extern "C" void const* const public_62479d8 = __AsmFindLabelExport(&internal_62479d0, 0x62479d8);
extern "C" void const* const public_62479e9 = __AsmFindLabelExport(&internal_62479d0, 0x62479e9);
