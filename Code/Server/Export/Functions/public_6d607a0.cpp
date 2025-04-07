#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d607ab _public_6d607ab
#define public_6d607b6 _public_6d607b6
#define public_6d607c2 _public_6d607c2
#define public_6d607ce _public_6d607ce
#define public_6d607d7 _public_6d607d7

PROC_DECLARE(0x6d607a0, internal_6d607a0, public_6d607a0);
/* CHUNK of public_6cefb20 */
extern "C" NAKED register_t __cdecl internal_6d607a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_6cf0540
        public_6d607ab : nop
        lea ecx, ss:[ebp-0xF8]
        jmp public_6cf0540
        public_6d607b6 : nop
        lea ecx, ss:[ebp-0x16C]
        jmp dword ptr ds : [public_6d64390]
        public_6d607c2 : nop
        lea ecx, ss:[ebp-0x88]
        jmp dword ptr ds : [public_6d64390]
        public_6d607ce : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_6d6438c]
        public_6d607d7 : nop
        mov eax, offset public_6d710e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d607a0)
        ASM_EXPORT_ENTRY_FIRST(0x6d607ab, public_6d607ab)
        ASM_EXPORT_ENTRY(0x6d607b6, public_6d607b6)
        ASM_EXPORT_ENTRY(0x6d607c2, public_6d607c2)
        ASM_EXPORT_ENTRY(0x6d607ce, public_6d607ce)
        ASM_EXPORT_ENTRY_LAST(0x6d607d7, public_6d607d7)
    }
}

#undef public_6d607ab
#undef public_6d607b6
#undef public_6d607c2
#undef public_6d607ce
#undef public_6d607d7

#pragma init_seg(compiler)
extern "C" void const* const public_6d607ab = __AsmFindLabelExport(&internal_6d607a0, 0x6d607ab);
extern "C" void const* const public_6d607b6 = __AsmFindLabelExport(&internal_6d607a0, 0x6d607b6);
extern "C" void const* const public_6d607c2 = __AsmFindLabelExport(&internal_6d607a0, 0x6d607c2);
extern "C" void const* const public_6d607ce = __AsmFindLabelExport(&internal_6d607a0, 0x6d607ce);
extern "C" void const* const public_6d607d7 = __AsmFindLabelExport(&internal_6d607a0, 0x6d607d7);
