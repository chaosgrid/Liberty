#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207c20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624836b _public_624836b
#define public_6248373 _public_6248373
#define public_624837e _public_624837e

PROC_DECLARE(0x6248360, internal_6248360, public_6248360);
/* CHUNK of public_6217c20 */
extern "C" NAKED register_t __cdecl internal_6248360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624836b : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6207c20
        public_6248373 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624837e : nop
        mov eax, offset public_6251238
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248360)
        ASM_EXPORT_ENTRY_FIRST(0x624836b, public_624836b)
        ASM_EXPORT_ENTRY(0x6248373, public_6248373)
        ASM_EXPORT_ENTRY_LAST(0x624837e, public_624837e)
    }
}

#undef public_624836b
#undef public_6248373
#undef public_624837e

#pragma init_seg(compiler)
extern "C" void const* const public_624836b = __AsmFindLabelExport(&internal_6248360, 0x624836b);
extern "C" void const* const public_6248373 = __AsmFindLabelExport(&internal_6248360, 0x6248373);
extern "C" void const* const public_624837e = __AsmFindLabelExport(&internal_6248360, 0x624837e);
