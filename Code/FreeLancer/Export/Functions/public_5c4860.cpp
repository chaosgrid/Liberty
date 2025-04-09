#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4869 _public_5c4869

PROC_DECLARE(0x5c4860, internal_5c4860, public_5c4860);
/* CHUNK of public_58e360 */
extern "C" NAKED register_t __cdecl internal_5c4860()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_5c62c4]
        public_5c4869 : nop
        mov eax, offset public_5fe4dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4860)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4869, public_5c4869)
    }
}

#undef public_5c4869

#pragma init_seg(compiler)
extern "C" void const* const public_5c4869 = __AsmFindLabelExport(&internal_5c4860, 0x5c4869);
