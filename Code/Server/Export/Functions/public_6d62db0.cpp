#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62dbc _public_6d62dbc
#define public_6d62dc7 _public_6d62dc7
#define public_6d62dd3 _public_6d62dd3
#define public_6d62ddf _public_6d62ddf

PROC_DECLARE(0x6d62db0, internal_6d62db0, public_6d62db0);
/* CHUNK of public_6d448d0 */
extern "C" NAKED register_t __cdecl internal_6d62db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d62dbc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d62dc7 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62dd3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62ddf : nop
        mov eax, offset public_6d751d8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62db0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62dbc, public_6d62dbc)
        ASM_EXPORT_ENTRY(0x6d62dc7, public_6d62dc7)
        ASM_EXPORT_ENTRY(0x6d62dd3, public_6d62dd3)
        ASM_EXPORT_ENTRY_LAST(0x6d62ddf, public_6d62ddf)
    }
}

#undef public_6d62dbc
#undef public_6d62dc7
#undef public_6d62dd3
#undef public_6d62ddf

#pragma init_seg(compiler)
extern "C" void const* const public_6d62dbc = __AsmFindLabelExport(&internal_6d62db0, 0x6d62dbc);
extern "C" void const* const public_6d62dc7 = __AsmFindLabelExport(&internal_6d62db0, 0x6d62dc7);
extern "C" void const* const public_6d62dd3 = __AsmFindLabelExport(&internal_6d62db0, 0x6d62dd3);
extern "C" void const* const public_6d62ddf = __AsmFindLabelExport(&internal_6d62db0, 0x6d62ddf);
