#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1609 _public_5c1609

PROC_DECLARE(0x5c1600, internal_5c1600, public_5c1600);
/* CHUNK of public_55a360 */
extern "C" NAKED register_t __cdecl internal_5c1600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp dword ptr ds : [public_5c7090]
        public_5c1609 : nop
        mov eax, offset public_5fb9b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1600)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1609, public_5c1609)
    }
}

#undef public_5c1609

#pragma init_seg(compiler)
extern "C" void const* const public_5c1609 = __AsmFindLabelExport(&internal_5c1600, 0x5c1609);
