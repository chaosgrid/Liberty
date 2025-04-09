#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b91d9 _public_5b91d9

PROC_DECLARE(0x5b91d0, internal_5b91d0, public_5b91d0);
/* CHUNK of public_437640 */
extern "C" NAKED register_t __cdecl internal_5b91d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp dword ptr ds : [public_5c6104]
        public_5b91d9 : nop
        mov eax, offset public_5f312c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b91d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b91d9, public_5b91d9)
    }
}

#undef public_5b91d9

#pragma init_seg(compiler)
extern "C" void const* const public_5b91d9 = __AsmFindLabelExport(&internal_5b91d0, 0x5b91d9);
