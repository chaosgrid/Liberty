#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1420);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63cfb _public_6d63cfb
#define public_6d63d06 _public_6d63d06

PROC_DECLARE(0x6d63cf0, internal_6d63cf0, public_6d63cf0);
/* CHUNK of public_6d5b320 */
extern "C" NAKED register_t __cdecl internal_6d63cf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 8
        jmp public_6ce1420
        public_6d63cfb : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0x1C
        jmp public_6ce1420
        public_6d63d06 : nop
        mov eax, offset public_6d75ec8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63cf0)
        ASM_EXPORT_ENTRY_FIRST(0x6d63cfb, public_6d63cfb)
        ASM_EXPORT_ENTRY_LAST(0x6d63d06, public_6d63d06)
    }
}

#undef public_6d63cfb
#undef public_6d63d06

#pragma init_seg(compiler)
extern "C" void const* const public_6d63cfb = __AsmFindLabelExport(&internal_6d63cf0, 0x6d63cfb);
extern "C" void const* const public_6d63d06 = __AsmFindLabelExport(&internal_6d63cf0, 0x6d63d06);
