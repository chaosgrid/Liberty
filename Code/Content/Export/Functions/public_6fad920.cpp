#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad92c _public_6fad92c

PROC_DECLARE(0x6fad920, internal_6fad920, public_6fad920);
/* CHUNK of public_6f169a0 */
extern "C" NAKED register_t __cdecl internal_6fad920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x508]
        jmp dword ptr ds : [public_6fb3034]
        public_6fad92c : nop
        mov eax, offset public_6fc27c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad920)
        ASM_EXPORT_ENTRY_SINGLE(0x6fad92c, public_6fad92c)
    }
}

#undef public_6fad92c

#pragma init_seg(compiler)
extern "C" void const* const public_6fad92c = __AsmFindLabelExport(&internal_6fad920, 0x6fad92c);
