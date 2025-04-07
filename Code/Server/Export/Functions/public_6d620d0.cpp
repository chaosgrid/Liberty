#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d620d9 _public_6d620d9
#define public_6d620e2 _public_6d620e2

PROC_DECLARE(0x6d620d0, internal_6d620d0, public_6d620d0);
/* CHUNK of public_6d1b3a0 */
extern "C" NAKED register_t __cdecl internal_6d620d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d620d9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d64c60]
        public_6d620e2 : nop
        mov eax, offset public_6d72e90
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d620d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d620d9, public_6d620d9)
        ASM_EXPORT_ENTRY_LAST(0x6d620e2, public_6d620e2)
    }
}

#undef public_6d620d9
#undef public_6d620e2

#pragma init_seg(compiler)
extern "C" void const* const public_6d620d9 = __AsmFindLabelExport(&internal_6d620d0, 0x6d620d9);
extern "C" void const* const public_6d620e2 = __AsmFindLabelExport(&internal_6d620d0, 0x6d620e2);
