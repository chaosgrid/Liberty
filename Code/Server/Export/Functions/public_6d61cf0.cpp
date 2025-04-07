#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61cf9 _public_6d61cf9
#define public_6d61d02 _public_6d61d02

PROC_DECLARE(0x6d61cf0, internal_6d61cf0, public_6d61cf0);
/* CHUNK of public_6d15f90 */
extern "C" NAKED register_t __cdecl internal_6d61cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d61cf9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d64c60]
        public_6d61d02 : nop
        mov eax, offset public_6d72a00
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6d61cf9, public_6d61cf9)
        ASM_EXPORT_ENTRY_LAST(0x6d61d02, public_6d61d02)
    }
}

#undef public_6d61cf9
#undef public_6d61d02

#pragma init_seg(compiler)
extern "C" void const* const public_6d61cf9 = __AsmFindLabelExport(&internal_6d61cf0, 0x6d61cf9);
extern "C" void const* const public_6d61d02 = __AsmFindLabelExport(&internal_6d61cf0, 0x6d61d02);
