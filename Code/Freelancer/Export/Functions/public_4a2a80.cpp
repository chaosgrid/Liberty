#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2a80);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_4a2a95 _public_4a2a95

PROC_DECLARE(0x4a2a80, internal_4a2a80, public_4a2a80);
/* CHUNK of public_45ca00 */
extern "C" NAKED register_t __cdecl internal_4a2a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_6720c4]
        test eax, eax
        je public_4a2a95
        push 0
        push 0x63
        call public_5763b0
        add esp, 8
        public_4a2a95 : nop
        ret 
        UNREACHABLE_TRAP(0x4a2a80)
        ASM_EXPORT_ENTRY_SINGLE(0x4a2a95, public_4a2a95)
    }
}

#undef public_4a2a95

#pragma init_seg(compiler)
extern "C" void const* const public_4a2a95 = __AsmFindLabelExport(&internal_4a2a80, 0x4a2a95);
