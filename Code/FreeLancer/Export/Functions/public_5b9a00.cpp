#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9a09 _public_5b9a09

PROC_DECLARE(0x5b9a00, internal_5b9a00, public_5b9a00);
/* CHUNK of public_4482b0 */
extern "C" NAKED register_t __cdecl internal_5b9a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c61b4]
        public_5b9a09 : nop
        mov eax, offset public_5f3a80
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9a00)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9a09, public_5b9a09)
    }
}

#undef public_5b9a09

#pragma init_seg(compiler)
extern "C" void const* const public_5b9a09 = __AsmFindLabelExport(&internal_5b9a00, 0x5b9a09);
