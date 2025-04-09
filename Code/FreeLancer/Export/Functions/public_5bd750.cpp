#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd759 _public_5bd759

PROC_DECLARE(0x5bd750, internal_5bd750, public_5bd750);
/* CHUNK of public_4c6530 */
extern "C" NAKED register_t __cdecl internal_5bd750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c61b4]
        public_5bd759 : nop
        mov eax, offset public_5f7b7c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd750)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd759, public_5bd759)
    }
}

#undef public_5bd759

#pragma init_seg(compiler)
extern "C" void const* const public_5bd759 = __AsmFindLabelExport(&internal_5bd750, 0x5bd759);
