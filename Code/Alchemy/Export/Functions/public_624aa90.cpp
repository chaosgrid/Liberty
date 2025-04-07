#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aa9b _public_624aa9b

PROC_DECLARE(0x624aa90, internal_624aa90, public_624aa90);
/* CHUNK of public_6244fb0 */
extern "C" NAKED register_t __cdecl internal_624aa90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624aa9b : nop
        mov eax, offset public_6253b40
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aa90)
        ASM_EXPORT_ENTRY_SINGLE(0x624aa9b, public_624aa9b)
    }
}

#undef public_624aa9b

#pragma init_seg(compiler)
extern "C" void const* const public_624aa9b = __AsmFindLabelExport(&internal_624aa90, 0x624aa9b);
