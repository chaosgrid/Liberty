#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45c60);
CLANG_FORWARD_PROC_SYMBOL(public_6d45cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62e38 _public_6d62e38
#define public_6d62e40 _public_6d62e40

PROC_DECLARE(0x6d62e30, internal_6d62e30, public_6d62e30);
/* CHUNK of public_6d45220 */
extern "C" NAKED register_t __cdecl internal_6d62e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6d45cc0
        public_6d62e38 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6d45c60
        public_6d62e40 : nop
        mov eax, offset public_6d75240
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62e30)
        ASM_EXPORT_ENTRY_FIRST(0x6d62e38, public_6d62e38)
        ASM_EXPORT_ENTRY_LAST(0x6d62e40, public_6d62e40)
    }
}

#undef public_6d62e38
#undef public_6d62e40

#pragma init_seg(compiler)
extern "C" void const* const public_6d62e38 = __AsmFindLabelExport(&internal_6d62e30, 0x6d62e38);
extern "C" void const* const public_6d62e40 = __AsmFindLabelExport(&internal_6d62e30, 0x6d62e40);
