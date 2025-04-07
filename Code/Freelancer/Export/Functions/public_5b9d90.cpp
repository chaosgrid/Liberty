#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9d99 _public_5b9d99

PROC_DECLARE(0x5b9d90, internal_5b9d90, public_5b9d90);
/* CHUNK of public_44e870 */
extern "C" NAKED register_t __cdecl internal_5b9d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp dword ptr ds : [public_5c6104]
        public_5b9d99 : nop
        mov eax, offset public_5f4030
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9d90)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9d99, public_5b9d99)
    }
}

#undef public_5b9d99

#pragma init_seg(compiler)
extern "C" void const* const public_5b9d99 = __AsmFindLabelExport(&internal_5b9d90, 0x5b9d99);
