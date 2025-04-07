#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf399 _public_5bf399

PROC_DECLARE(0x5bf390, internal_5bf390, public_5bf390);
/* CHUNK of public_4f5580 */
extern "C" NAKED register_t __cdecl internal_5bf390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7090]
        public_5bf399 : nop
        mov eax, offset public_5f92cc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf390)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf399, public_5bf399)
    }
}

#undef public_5bf399

#pragma init_seg(compiler)
extern "C" void const* const public_5bf399 = __AsmFindLabelExport(&internal_5bf390, 0x5bf399);
