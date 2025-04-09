#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba36c _public_5ba36c

PROC_DECLARE(0x5ba360, internal_5ba360, public_5ba360);
/* CHUNK of public_45e3e0 */
extern "C" NAKED register_t __cdecl internal_5ba360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_5c7090]
        public_5ba36c : nop
        mov eax, offset public_5f4754
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba360)
        ASM_EXPORT_ENTRY_SINGLE(0x5ba36c, public_5ba36c)
    }
}

#undef public_5ba36c

#pragma init_seg(compiler)
extern "C" void const* const public_5ba36c = __AsmFindLabelExport(&internal_5ba360, 0x5ba36c);
