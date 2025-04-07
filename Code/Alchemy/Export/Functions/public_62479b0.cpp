#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62479c1 _public_62479c1

PROC_DECLARE(0x62479b0, internal_62479b0, public_62479b0);
/* CHUNK of public_620caa0 */
extern "C" NAKED register_t __cdecl internal_62479b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_62479c1 : nop
        mov eax, offset public_62507dc
        jmp public_6246126
        UNREACHABLE_TRAP(0x62479b0)
        ASM_EXPORT_ENTRY_SINGLE(0x62479c1, public_62479c1)
    }
}

#undef public_62479c1

#pragma init_seg(compiler)
extern "C" void const* const public_62479c1 = __AsmFindLabelExport(&internal_62479b0, 0x62479c1);
