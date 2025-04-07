#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6082c _public_6d6082c
#define public_6d6083b _public_6d6083b

PROC_DECLARE(0x6d60820, internal_6d60820, public_6d60820);
/* CHUNK of public_6cefb20 */
extern "C" NAKED register_t __cdecl internal_6d60820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d6082c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d6083b : nop
        mov eax, offset public_6d7113c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60820)
        ASM_EXPORT_ENTRY_FIRST(0x6d6082c, public_6d6082c)
        ASM_EXPORT_ENTRY_LAST(0x6d6083b, public_6d6083b)
    }
}

#undef public_6d6082c
#undef public_6d6083b

#pragma init_seg(compiler)
extern "C" void const* const public_6d6082c = __AsmFindLabelExport(&internal_6d60820, 0x6d6082c);
extern "C" void const* const public_6d6083b = __AsmFindLabelExport(&internal_6d60820, 0x6d6083b);
