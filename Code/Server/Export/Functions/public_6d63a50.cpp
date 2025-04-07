#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63a5c _public_6d63a5c

PROC_DECLARE(0x6d63a50, internal_6d63a50, public_6d63a50);
/* CHUNK of public_6d55960 */
extern "C" NAKED register_t __cdecl internal_6d63a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6d64694]
        public_6d63a5c : nop
        mov eax, offset public_6d75c78
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63a50)
        ASM_EXPORT_ENTRY_SINGLE(0x6d63a5c, public_6d63a5c)
    }
}

#undef public_6d63a5c

#pragma init_seg(compiler)
extern "C" void const* const public_6d63a5c = __AsmFindLabelExport(&internal_6d63a50, 0x6d63a5c);
