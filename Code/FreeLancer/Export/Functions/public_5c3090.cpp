#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3098 _public_5c3098

PROC_DECLARE(0x5c3090, internal_5c3090, public_5c3090);
/* CHUNK of public_56fdf0 */
extern "C" NAKED register_t __cdecl internal_5c3090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_4de730
        public_5c3098 : nop
        mov eax, offset public_5fcfbc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3090)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3098, public_5c3098)
    }
}

#undef public_5c3098

#pragma init_seg(compiler)
extern "C" void const* const public_5c3098 = __AsmFindLabelExport(&internal_5c3090, 0x5c3098);
