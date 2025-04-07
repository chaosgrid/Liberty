#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1e58 _public_5c1e58
#define public_5c1e60 _public_5c1e60

PROC_DECLARE(0x5c1e50, internal_5c1e50, public_5c1e50);
/* CHUNK of public_563af0 */
extern "C" NAKED register_t __cdecl internal_5c1e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_405840
        public_5c1e58 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_405840
        public_5c1e60 : nop
        mov eax, offset public_5fc0cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1e50)
        ASM_EXPORT_ENTRY_FIRST(0x5c1e58, public_5c1e58)
        ASM_EXPORT_ENTRY_LAST(0x5c1e60, public_5c1e60)
    }
}

#undef public_5c1e58
#undef public_5c1e60

#pragma init_seg(compiler)
extern "C" void const* const public_5c1e58 = __AsmFindLabelExport(&internal_5c1e50, 0x5c1e58);
extern "C" void const* const public_5c1e60 = __AsmFindLabelExport(&internal_5c1e50, 0x5c1e60);
