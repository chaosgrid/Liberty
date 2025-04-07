#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60529 _public_6d60529

PROC_DECLARE(0x6d60520, internal_6d60520, public_6d60520);
/* CHUNK of public_6ce7e20 */
extern "C" NAKED register_t __cdecl internal_6d60520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60529 : nop
        mov eax, offset public_6d70dc0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60520)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60529, public_6d60529)
    }
}

#undef public_6d60529

#pragma init_seg(compiler)
extern "C" void const* const public_6d60529 = __AsmFindLabelExport(&internal_6d60520, 0x6d60529);
