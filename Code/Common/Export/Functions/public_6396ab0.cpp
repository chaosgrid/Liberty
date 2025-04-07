#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396abb _public_6396abb

PROC_DECLARE(0x6396ab0, internal_6396ab0, public_6396ab0);
/* CHUNK of public_631ae20 */
extern "C" NAKED register_t __cdecl internal_6396ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_630e210
        public_6396abb : nop
        mov eax, offset public_63b09e0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396ab0)
        ASM_EXPORT_ENTRY_SINGLE(0x6396abb, public_6396abb)
    }
}

#undef public_6396abb

#pragma init_seg(compiler)
extern "C" void const* const public_6396abb = __AsmFindLabelExport(&internal_6396ab0, 0x6396abb);
