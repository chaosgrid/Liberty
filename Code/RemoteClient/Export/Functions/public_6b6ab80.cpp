#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ee00);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ee10);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6ab88 _public_6b6ab88
#define public_6b6ab90 _public_6b6ab90

PROC_DECLARE(0x6b6ab80, internal_6b6ab80, public_6b6ab80);
/* CHUNK of public_6b4ed50 */
extern "C" NAKED register_t __cdecl internal_6b6ab80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x74]
        jmp public_6b4ee00
        public_6b6ab88 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6b4ee10
        public_6b6ab90 : nop
        mov eax, offset public_6b6f230
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6ab80)
        ASM_EXPORT_ENTRY_FIRST(0x6b6ab88, public_6b6ab88)
        ASM_EXPORT_ENTRY_LAST(0x6b6ab90, public_6b6ab90)
    }
}

#undef public_6b6ab88
#undef public_6b6ab90

#pragma init_seg(compiler)
extern "C" void const* const public_6b6ab88 = __AsmFindLabelExport(&internal_6b6ab80, 0x6b6ab88);
extern "C" void const* const public_6b6ab90 = __AsmFindLabelExport(&internal_6b6ab80, 0x6b6ab90);
