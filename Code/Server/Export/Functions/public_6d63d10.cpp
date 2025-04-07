#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1420);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63d1b _public_6d63d1b
#define public_6d63d26 _public_6d63d26

PROC_DECLARE(0x6d63d10, internal_6d63d10, public_6d63d10);
/* CHUNK of public_6d5b440 */
extern "C" NAKED register_t __cdecl internal_6d63d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_6ce1420
        public_6d63d1b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1C
        jmp public_6ce1420
        public_6d63d26 : nop
        mov eax, offset public_6d75ef4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63d10)
        ASM_EXPORT_ENTRY_FIRST(0x6d63d1b, public_6d63d1b)
        ASM_EXPORT_ENTRY_LAST(0x6d63d26, public_6d63d26)
    }
}

#undef public_6d63d1b
#undef public_6d63d26

#pragma init_seg(compiler)
extern "C" void const* const public_6d63d1b = __AsmFindLabelExport(&internal_6d63d10, 0x6d63d1b);
extern "C" void const* const public_6d63d26 = __AsmFindLabelExport(&internal_6d63d10, 0x6d63d26);
