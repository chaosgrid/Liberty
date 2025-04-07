#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62479a1 _public_62479a1

PROC_DECLARE(0x6247990, internal_6247990, public_6247990);
/* CHUNK of public_620c980 */
extern "C" NAKED register_t __cdecl internal_6247990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_62479a1 : nop
        mov eax, offset public_62507b8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247990)
        ASM_EXPORT_ENTRY_SINGLE(0x62479a1, public_62479a1)
    }
}

#undef public_62479a1

#pragma init_seg(compiler)
extern "C" void const* const public_62479a1 = __AsmFindLabelExport(&internal_6247990, 0x62479a1);
