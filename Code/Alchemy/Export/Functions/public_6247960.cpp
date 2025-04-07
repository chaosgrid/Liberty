#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6208800);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247968 _public_6247968
#define public_6247979 _public_6247979

PROC_DECLARE(0x6247960, internal_6247960, public_6247960);
/* CHUNK of public_620c870 */
extern "C" NAKED register_t __cdecl internal_6247960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+0xC]
        jmp public_6208800
        public_6247968 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6247979 : nop
        mov eax, offset public_6250794
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247960)
        ASM_EXPORT_ENTRY_FIRST(0x6247968, public_6247968)
        ASM_EXPORT_ENTRY_LAST(0x6247979, public_6247979)
    }
}

#undef public_6247968
#undef public_6247979

#pragma init_seg(compiler)
extern "C" void const* const public_6247968 = __AsmFindLabelExport(&internal_6247960, 0x6247968);
extern "C" void const* const public_6247979 = __AsmFindLabelExport(&internal_6247960, 0x6247979);
