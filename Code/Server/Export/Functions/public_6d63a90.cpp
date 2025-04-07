#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63a9b _public_6d63a9b
#define public_6d63aa7 _public_6d63aa7

PROC_DECLARE(0x6d63a90, internal_6d63a90, public_6d63a90);
/* CHUNK of public_6d567d0 */
extern "C" NAKED register_t __cdecl internal_6d63a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6ce36f0
        public_6d63a9b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp dword ptr ds : [public_6d64b94]
        public_6d63aa7 : nop
        mov eax, offset public_6d75cc8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63a90)
        ASM_EXPORT_ENTRY_FIRST(0x6d63a9b, public_6d63a9b)
        ASM_EXPORT_ENTRY_LAST(0x6d63aa7, public_6d63aa7)
    }
}

#undef public_6d63a9b
#undef public_6d63aa7

#pragma init_seg(compiler)
extern "C" void const* const public_6d63a9b = __AsmFindLabelExport(&internal_6d63a90, 0x6d63a9b);
extern "C" void const* const public_6d63aa7 = __AsmFindLabelExport(&internal_6d63a90, 0x6d63aa7);
