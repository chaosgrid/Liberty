#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0a080);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61468 _public_6d61468
#define public_6d61477 _public_6d61477

PROC_DECLARE(0x6d61460, internal_6d61460, public_6d61460);
/* CHUNK of public_6d09d60 */
extern "C" NAKED register_t __cdecl internal_6d61460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d0a080
        public_6d61468 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x9C
        jmp dword ptr ds : [public_6d64390]
        public_6d61477 : nop
        mov eax, offset public_6d7209c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61460)
        ASM_EXPORT_ENTRY_FIRST(0x6d61468, public_6d61468)
        ASM_EXPORT_ENTRY_LAST(0x6d61477, public_6d61477)
    }
}

#undef public_6d61468
#undef public_6d61477

#pragma init_seg(compiler)
extern "C" void const* const public_6d61468 = __AsmFindLabelExport(&internal_6d61460, 0x6d61468);
extern "C" void const* const public_6d61477 = __AsmFindLabelExport(&internal_6d61460, 0x6d61477);
