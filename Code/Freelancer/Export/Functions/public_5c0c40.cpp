#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0c49 _public_5c0c49

PROC_DECLARE(0x5c0c40, internal_5c0c40, public_5c0c40);
/* CHUNK of public_53c470 */
extern "C" NAKED register_t __cdecl internal_5c0c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c6550]
        public_5c0c49 : nop
        mov eax, offset public_5fae54
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0c40)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0c49, public_5c0c49)
    }
}

#undef public_5c0c49

#pragma init_seg(compiler)
extern "C" void const* const public_5c0c49 = __AsmFindLabelExport(&internal_5c0c40, 0x5c0c49);
