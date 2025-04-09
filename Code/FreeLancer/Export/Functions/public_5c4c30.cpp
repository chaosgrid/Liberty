#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4c39 _public_5c4c39

PROC_DECLARE(0x5c4c30, internal_5c4c30, public_5c4c30);
/* CHUNK of public_59a760 */
extern "C" NAKED register_t __cdecl internal_5c4c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5c4c39 : nop
        mov eax, offset public_5fe954
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4c30)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4c39, public_5c4c39)
    }
}

#undef public_5c4c39

#pragma init_seg(compiler)
extern "C" void const* const public_5c4c39 = __AsmFindLabelExport(&internal_5c4c30, 0x5c4c39);
