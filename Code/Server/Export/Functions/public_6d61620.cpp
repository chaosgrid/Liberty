#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6162b _public_6d6162b
#define public_6d61634 _public_6d61634
#define public_6d6163d _public_6d6163d

PROC_DECLARE(0x6d61620, internal_6d61620, public_6d61620);
/* CHUNK of public_6d0d100 */
extern "C" NAKED register_t __cdecl internal_6d61620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xEC]
        jmp public_6cf0540
        public_6d6162b : nop
        lea ecx, ss:[ebp-0x7C]
        jmp dword ptr ds : [public_6d64390]
        public_6d61634 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d6438c]
        public_6d6163d : nop
        mov eax, offset public_6d72260
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61620)
        ASM_EXPORT_ENTRY_FIRST(0x6d6162b, public_6d6162b)
        ASM_EXPORT_ENTRY(0x6d61634, public_6d61634)
        ASM_EXPORT_ENTRY_LAST(0x6d6163d, public_6d6163d)
    }
}

#undef public_6d6162b
#undef public_6d61634
#undef public_6d6163d

#pragma init_seg(compiler)
extern "C" void const* const public_6d6162b = __AsmFindLabelExport(&internal_6d61620, 0x6d6162b);
extern "C" void const* const public_6d61634 = __AsmFindLabelExport(&internal_6d61620, 0x6d61634);
extern "C" void const* const public_6d6163d = __AsmFindLabelExport(&internal_6d61620, 0x6d6163d);
