#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60e3c _public_6d60e3c
#define public_6d60e47 _public_6d60e47

PROC_DECLARE(0x6d60e30, internal_6d60e30, public_6d60e30);
/* CHUNK of public_6cff290 */
extern "C" NAKED register_t __cdecl internal_6d60e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xBC]
        jmp dword ptr ds : [public_6d6457c]
        public_6d60e3c : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_6cecb50
        public_6d60e47 : nop
        mov eax, offset public_6d71968
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60e30)
        ASM_EXPORT_ENTRY_FIRST(0x6d60e3c, public_6d60e3c)
        ASM_EXPORT_ENTRY_LAST(0x6d60e47, public_6d60e47)
    }
}

#undef public_6d60e3c
#undef public_6d60e47

#pragma init_seg(compiler)
extern "C" void const* const public_6d60e3c = __AsmFindLabelExport(&internal_6d60e30, 0x6d60e3c);
extern "C" void const* const public_6d60e47 = __AsmFindLabelExport(&internal_6d60e30, 0x6d60e47);
