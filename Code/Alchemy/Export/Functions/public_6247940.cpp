#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247951 _public_6247951

PROC_DECLARE(0x6247940, internal_6247940, public_6247940);
/* CHUNK of public_620c760 */
extern "C" NAKED register_t __cdecl internal_6247940()
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
        public_6247951 : nop
        mov eax, offset public_6250768
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247940)
        ASM_EXPORT_ENTRY_SINGLE(0x6247951, public_6247951)
    }
}

#undef public_6247951

#pragma init_seg(compiler)
extern "C" void const* const public_6247951 = __AsmFindLabelExport(&internal_6247940, 0x6247951);
