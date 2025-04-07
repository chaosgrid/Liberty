#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aa81 _public_624aa81

PROC_DECLARE(0x624aa70, internal_624aa70, public_624aa70);
/* CHUNK of public_6244aa0 */
extern "C" NAKED register_t __cdecl internal_624aa70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_624aa81 : nop
        mov eax, offset public_6253b1c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aa70)
        ASM_EXPORT_ENTRY_SINGLE(0x624aa81, public_624aa81)
    }
}

#undef public_624aa81

#pragma init_seg(compiler)
extern "C" void const* const public_624aa81 = __AsmFindLabelExport(&internal_624aa70, 0x624aa81);
