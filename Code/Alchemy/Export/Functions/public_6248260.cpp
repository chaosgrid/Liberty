#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624826b _public_624826b
#define public_6248273 _public_6248273

PROC_DECLARE(0x6248260, internal_6248260, public_6248260);
/* CHUNK of public_6215d80 */
extern "C" NAKED register_t __cdecl internal_6248260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624826b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6248273 : nop
        mov eax, offset public_62510d8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248260)
        ASM_EXPORT_ENTRY_FIRST(0x624826b, public_624826b)
        ASM_EXPORT_ENTRY_LAST(0x6248273, public_6248273)
    }
}

#undef public_624826b
#undef public_6248273

#pragma init_seg(compiler)
extern "C" void const* const public_624826b = __AsmFindLabelExport(&internal_6248260, 0x624826b);
extern "C" void const* const public_6248273 = __AsmFindLabelExport(&internal_6248260, 0x6248273);
