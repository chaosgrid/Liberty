#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62478e1 _public_62478e1

PROC_DECLARE(0x62478d0, internal_62478d0, public_62478d0);
/* CHUNK of public_620c420 */
extern "C" NAKED register_t __cdecl internal_62478d0()
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
        public_62478e1 : nop
        mov eax, offset public_62506f4
        jmp public_6246126
        UNREACHABLE_TRAP(0x62478d0)
        ASM_EXPORT_ENTRY_SINGLE(0x62478e1, public_62478e1)
    }
}

#undef public_62478e1

#pragma init_seg(compiler)
extern "C" void const* const public_62478e1 = __AsmFindLabelExport(&internal_62478d0, 0x62478e1);
