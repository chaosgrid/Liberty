#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62be8 _public_6d62be8
#define public_6d62bf0 _public_6d62bf0

PROC_DECLARE(0x6d62be0, internal_6d62be0, public_6d62be0);
/* CHUNK of public_6d29230 */
extern "C" NAKED register_t __cdecl internal_6d62be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6d29370
        public_6d62be8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d209f0
        public_6d62bf0 : nop
        mov eax, offset public_6d73ebc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62be0)
        ASM_EXPORT_ENTRY_FIRST(0x6d62be8, public_6d62be8)
        ASM_EXPORT_ENTRY_LAST(0x6d62bf0, public_6d62bf0)
    }
}

#undef public_6d62be8
#undef public_6d62bf0

#pragma init_seg(compiler)
extern "C" void const* const public_6d62be8 = __AsmFindLabelExport(&internal_6d62be0, 0x6d62be8);
extern "C" void const* const public_6d62bf0 = __AsmFindLabelExport(&internal_6d62be0, 0x6d62bf0);
