#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1f1c _public_5c1f1c

PROC_DECLARE(0x5c1f10, internal_5c1f10, public_5c1f10);
/* CHUNK of public_5650f0 */
extern "C" NAKED register_t __cdecl internal_5c1f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA8]
        jmp dword ptr ds : [public_5c7090]
        public_5c1f1c : nop
        mov eax, offset public_5fc1f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1f10)
        ASM_EXPORT_ENTRY_SINGLE(0x5c1f1c, public_5c1f1c)
    }
}

#undef public_5c1f1c

#pragma init_seg(compiler)
extern "C" void const* const public_5c1f1c = __AsmFindLabelExport(&internal_5c1f10, 0x5c1f1c);
