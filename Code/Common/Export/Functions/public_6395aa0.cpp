#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395aab _public_6395aab
#define public_6395ab6 _public_6395ab6

PROC_DECLARE(0x6395aa0, internal_6395aa0, public_6395aa0);
/* CHUNK of public_62f9a20 */
extern "C" NAKED register_t __cdecl internal_6395aa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x40
        jmp public_62a68e0
        public_6395aab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62a68e0
        public_6395ab6 : nop
        mov eax, offset public_63af8c0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395aa0)
        ASM_EXPORT_ENTRY_FIRST(0x6395aab, public_6395aab)
        ASM_EXPORT_ENTRY_LAST(0x6395ab6, public_6395ab6)
    }
}

#undef public_6395aab
#undef public_6395ab6

#pragma init_seg(compiler)
extern "C" void const* const public_6395aab = __AsmFindLabelExport(&internal_6395aa0, 0x6395aab);
extern "C" void const* const public_6395ab6 = __AsmFindLabelExport(&internal_6395aa0, 0x6395ab6);
