#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395a8b _public_6395a8b
#define public_6395a96 _public_6395a96

PROC_DECLARE(0x6395a80, internal_6395a80, public_6395a80);
/* CHUNK of public_62f9930 */
extern "C" NAKED register_t __cdecl internal_6395a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_62a68e0
        public_6395a8b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62a68e0
        public_6395a96 : nop
        mov eax, offset public_63af894
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395a80)
        ASM_EXPORT_ENTRY_FIRST(0x6395a8b, public_6395a8b)
        ASM_EXPORT_ENTRY_LAST(0x6395a96, public_6395a96)
    }
}

#undef public_6395a8b
#undef public_6395a96

#pragma init_seg(compiler)
extern "C" void const* const public_6395a8b = __AsmFindLabelExport(&internal_6395a80, 0x6395a8b);
extern "C" void const* const public_6395a96 = __AsmFindLabelExport(&internal_6395a80, 0x6395a96);
