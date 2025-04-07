#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf0540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60b2b _public_6d60b2b
#define public_6d60b36 _public_6d60b36
#define public_6d60b42 _public_6d60b42
#define public_6d60b4b _public_6d60b4b

PROC_DECLARE(0x6d60b20, internal_6d60b20, public_6d60b20);
/* CHUNK of public_6cf7c90 */
extern "C" NAKED register_t __cdecl internal_6d60b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF8]
        jmp public_6cf0540
        public_6d60b2b : nop
        lea ecx, ss:[ebp-0xF8]
        jmp public_6cf0540
        public_6d60b36 : nop
        lea ecx, ss:[ebp-0x88]
        jmp dword ptr ds : [public_6d64390]
        public_6d60b42 : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_6d6438c]
        public_6d60b4b : nop
        mov eax, offset public_6d7148c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60b20)
        ASM_EXPORT_ENTRY_FIRST(0x6d60b2b, public_6d60b2b)
        ASM_EXPORT_ENTRY(0x6d60b36, public_6d60b36)
        ASM_EXPORT_ENTRY(0x6d60b42, public_6d60b42)
        ASM_EXPORT_ENTRY_LAST(0x6d60b4b, public_6d60b4b)
    }
}

#undef public_6d60b2b
#undef public_6d60b36
#undef public_6d60b42
#undef public_6d60b4b

#pragma init_seg(compiler)
extern "C" void const* const public_6d60b2b = __AsmFindLabelExport(&internal_6d60b20, 0x6d60b2b);
extern "C" void const* const public_6d60b36 = __AsmFindLabelExport(&internal_6d60b20, 0x6d60b36);
extern "C" void const* const public_6d60b42 = __AsmFindLabelExport(&internal_6d60b20, 0x6d60b42);
extern "C" void const* const public_6d60b4b = __AsmFindLabelExport(&internal_6d60b20, 0x6d60b4b);
