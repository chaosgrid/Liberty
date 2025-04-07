#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247931 _public_6247931

PROC_DECLARE(0x6247920, internal_6247920, public_6247920);
/* CHUNK of public_620c640 */
extern "C" NAKED register_t __cdecl internal_6247920()
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
        public_6247931 : nop
        mov eax, offset public_6250744
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247920)
        ASM_EXPORT_ENTRY_SINGLE(0x6247931, public_6247931)
    }
}

#undef public_6247931

#pragma init_seg(compiler)
extern "C" void const* const public_6247931 = __AsmFindLabelExport(&internal_6247920, 0x6247931);
