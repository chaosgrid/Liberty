#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c35c9 _public_5c35c9

PROC_DECLARE(0x5c35c0, internal_5c35c0, public_5c35c0);
/* CHUNK of public_572100 */
extern "C" NAKED register_t __cdecl internal_5c35c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7058]
        public_5c35c9 : nop
        mov eax, offset public_5fd3a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c35c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c35c9, public_5c35c9)
    }
}

#undef public_5c35c9

#pragma init_seg(compiler)
extern "C" void const* const public_5c35c9 = __AsmFindLabelExport(&internal_5c35c0, 0x5c35c9);
