#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61ebc _public_6d61ebc
#define public_6d61ec8 _public_6d61ec8
#define public_6d61ed3 _public_6d61ed3
#define public_6d61edf _public_6d61edf
#define public_6d61eea _public_6d61eea

PROC_DECLARE(0x6d61eb0, internal_6d61eb0, public_6d61eb0);
/* CHUNK of public_6d18ea0 */
extern "C" NAKED register_t __cdecl internal_6d61eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x83C]
        jmp dword ptr ds : [public_6d647f0]
        public_6d61ebc : nop
        lea ecx, ss:[ebp-0x828]
        jmp dword ptr ds : [public_6d64800]
        public_6d61ec8 : nop
        lea ecx, ss:[ebp-0x840]
        jmp public_6d19f00
        public_6d61ed3 : nop
        lea ecx, ss:[ebp-0x820]
        jmp dword ptr ds : [public_6d647f8]
        public_6d61edf : nop
        lea ecx, ss:[ebp-0x840]
        jmp public_6d19f00
        public_6d61eea : nop
        mov eax, offset public_6d72c1c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61eb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d61ebc, public_6d61ebc)
        ASM_EXPORT_ENTRY(0x6d61ec8, public_6d61ec8)
        ASM_EXPORT_ENTRY(0x6d61ed3, public_6d61ed3)
        ASM_EXPORT_ENTRY(0x6d61edf, public_6d61edf)
        ASM_EXPORT_ENTRY_LAST(0x6d61eea, public_6d61eea)
    }
}

#undef public_6d61ebc
#undef public_6d61ec8
#undef public_6d61ed3
#undef public_6d61edf
#undef public_6d61eea

#pragma init_seg(compiler)
extern "C" void const* const public_6d61ebc = __AsmFindLabelExport(&internal_6d61eb0, 0x6d61ebc);
extern "C" void const* const public_6d61ec8 = __AsmFindLabelExport(&internal_6d61eb0, 0x6d61ec8);
extern "C" void const* const public_6d61ed3 = __AsmFindLabelExport(&internal_6d61eb0, 0x6d61ed3);
extern "C" void const* const public_6d61edf = __AsmFindLabelExport(&internal_6d61eb0, 0x6d61edf);
extern "C" void const* const public_6d61eea = __AsmFindLabelExport(&internal_6d61eb0, 0x6d61eea);
