#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63957f8 _public_63957f8
#define public_6395800 _public_6395800

PROC_DECLARE(0x63957f0, internal_63957f0, public_63957f0);
/* CHUNK of public_62f4f30 */
extern "C" NAKED register_t __cdecl internal_63957f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_63957f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_626fe00
        public_6395800 : nop
        mov eax, offset public_63af43c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63957f0)
        ASM_EXPORT_ENTRY_FIRST(0x63957f8, public_63957f8)
        ASM_EXPORT_ENTRY_LAST(0x6395800, public_6395800)
    }
}

#undef public_63957f8
#undef public_6395800

#pragma init_seg(compiler)
extern "C" void const* const public_63957f8 = __AsmFindLabelExport(&internal_63957f0, 0x63957f8);
extern "C" void const* const public_6395800 = __AsmFindLabelExport(&internal_63957f0, 0x6395800);
