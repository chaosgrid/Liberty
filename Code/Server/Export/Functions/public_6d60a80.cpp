#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60a8c _public_6d60a8c
#define public_6d60a9b _public_6d60a9b

PROC_DECLARE(0x6d60a80, internal_6d60a80, public_6d60a80);
/* CHUNK of public_6cf63f0 */
extern "C" NAKED register_t __cdecl internal_6d60a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d60a8c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d60a9b : nop
        mov eax, offset public_6d713dc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60a80)
        ASM_EXPORT_ENTRY_FIRST(0x6d60a8c, public_6d60a8c)
        ASM_EXPORT_ENTRY_LAST(0x6d60a9b, public_6d60a9b)
    }
}

#undef public_6d60a8c
#undef public_6d60a9b

#pragma init_seg(compiler)
extern "C" void const* const public_6d60a8c = __AsmFindLabelExport(&internal_6d60a80, 0x6d60a8c);
extern "C" void const* const public_6d60a9b = __AsmFindLabelExport(&internal_6d60a80, 0x6d60a9b);
