#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd459 _public_5bd459

PROC_DECLARE(0x5bd450, internal_5bd450, public_5bd450);
/* CHUNK of public_4b9c60 */
extern "C" NAKED register_t __cdecl internal_5bd450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c6098]
        public_5bd459 : nop
        mov eax, offset public_5f7794
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd450)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd459, public_5bd459)
    }
}

#undef public_5bd459

#pragma init_seg(compiler)
extern "C" void const* const public_5bd459 = __AsmFindLabelExport(&internal_5bd450, 0x5bd459);
