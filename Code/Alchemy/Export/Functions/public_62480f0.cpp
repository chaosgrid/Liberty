#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62480fb _public_62480fb

PROC_DECLARE(0x62480f0, internal_62480f0, public_62480f0);
/* CHUNK of public_62141c0 */
extern "C" NAKED register_t __cdecl internal_62480f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62480fb : nop
        mov eax, offset public_6250f74
        jmp public_6246126
        UNREACHABLE_TRAP(0x62480f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62480fb, public_62480fb)
    }
}

#undef public_62480fb

#pragma init_seg(compiler)
extern "C" void const* const public_62480fb = __AsmFindLabelExport(&internal_62480f0, 0x62480fb);
