#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d086f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62e59 _public_6d62e59
#define public_6d62e64 _public_6d62e64
#define public_6d62e6d _public_6d62e6d

PROC_DECLARE(0x6d62e50, internal_6d62e50, public_6d62e50);
/* CHUNK of public_6d453f0 */
extern "C" NAKED register_t __cdecl internal_6d62e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d64694]
        public_6d62e59 : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6d086f0
        public_6d62e64 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d64694]
        public_6d62e6d : nop
        mov eax, offset public_6d752b0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62e50)
        ASM_EXPORT_ENTRY_FIRST(0x6d62e59, public_6d62e59)
        ASM_EXPORT_ENTRY(0x6d62e64, public_6d62e64)
        ASM_EXPORT_ENTRY_LAST(0x6d62e6d, public_6d62e6d)
    }
}

#undef public_6d62e59
#undef public_6d62e64
#undef public_6d62e6d

#pragma init_seg(compiler)
extern "C" void const* const public_6d62e59 = __AsmFindLabelExport(&internal_6d62e50, 0x6d62e59);
extern "C" void const* const public_6d62e64 = __AsmFindLabelExport(&internal_6d62e50, 0x6d62e64);
extern "C" void const* const public_6d62e6d = __AsmFindLabelExport(&internal_6d62e50, 0x6d62e6d);
