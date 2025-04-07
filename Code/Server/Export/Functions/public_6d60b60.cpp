#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf83c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60b6b _public_6d60b6b
#define public_6d60b76 _public_6d60b76
#define public_6d60b7f _public_6d60b7f
#define public_6d60b88 _public_6d60b88

PROC_DECLARE(0x6d60b60, internal_6d60b60, public_6d60b60);
/* CHUNK of public_6cf80d0 */
extern "C" NAKED register_t __cdecl internal_6d60b60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xD4]
        jmp public_6cf83c0
        public_6d60b6b : nop
        lea ecx, ss:[ebp-0xD4]
        jmp public_6cf83c0
        public_6d60b76 : nop
        lea ecx, ss:[ebp-0x64]
        jmp dword ptr ds : [public_6d64390]
        public_6d60b7f : nop
        lea ecx, ss:[ebp-0x54]
        jmp dword ptr ds : [public_6d6438c]
        public_6d60b88 : nop
        mov eax, offset public_6d714c8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60b60)
        ASM_EXPORT_ENTRY_FIRST(0x6d60b6b, public_6d60b6b)
        ASM_EXPORT_ENTRY(0x6d60b76, public_6d60b76)
        ASM_EXPORT_ENTRY(0x6d60b7f, public_6d60b7f)
        ASM_EXPORT_ENTRY_LAST(0x6d60b88, public_6d60b88)
    }
}

#undef public_6d60b6b
#undef public_6d60b76
#undef public_6d60b7f
#undef public_6d60b88

#pragma init_seg(compiler)
extern "C" void const* const public_6d60b6b = __AsmFindLabelExport(&internal_6d60b60, 0x6d60b6b);
extern "C" void const* const public_6d60b76 = __AsmFindLabelExport(&internal_6d60b60, 0x6d60b76);
extern "C" void const* const public_6d60b7f = __AsmFindLabelExport(&internal_6d60b60, 0x6d60b7f);
extern "C" void const* const public_6d60b88 = __AsmFindLabelExport(&internal_6d60b60, 0x6d60b88);
