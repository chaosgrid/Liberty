#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a5d70);
CLANG_FORWARD_PROC_SYMBOL(public_62a6190);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393e5b _public_6393e5b
#define public_6393e63 _public_6393e63
#define public_6393e6b _public_6393e6b

PROC_DECLARE(0x6393e50, internal_6393e50, public_6393e50);
/* CHUNK of public_62a5ab0 */
extern "C" NAKED register_t __cdecl internal_6393e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC0]
        jmp public_62a6190
        public_6393e5b : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_62a5d70
        public_6393e63 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_62a68e0
        public_6393e6b : nop
        mov eax, offset public_63ad2f0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393e50)
        ASM_EXPORT_ENTRY_FIRST(0x6393e5b, public_6393e5b)
        ASM_EXPORT_ENTRY(0x6393e63, public_6393e63)
        ASM_EXPORT_ENTRY_LAST(0x6393e6b, public_6393e6b)
    }
}

#undef public_6393e5b
#undef public_6393e63
#undef public_6393e6b

#pragma init_seg(compiler)
extern "C" void const* const public_6393e5b = __AsmFindLabelExport(&internal_6393e50, 0x6393e5b);
extern "C" void const* const public_6393e63 = __AsmFindLabelExport(&internal_6393e50, 0x6393e63);
extern "C" void const* const public_6393e6b = __AsmFindLabelExport(&internal_6393e50, 0x6393e6b);
