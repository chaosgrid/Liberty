#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf349 _public_5bf349

PROC_DECLARE(0x5bf340, internal_5bf340, public_5bf340);
/* CHUNK of public_4f53b0 */
extern "C" NAKED register_t __cdecl internal_5bf340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp dword ptr ds : [public_5c62a4]
        public_5bf349 : nop
        mov eax, offset public_5f9274
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf340)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf349, public_5bf349)
    }
}

#undef public_5bf349

#pragma init_seg(compiler)
extern "C" void const* const public_5bf349 = __AsmFindLabelExport(&internal_5bf340, 0x5bf349);
