#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60abc _public_6d60abc
#define public_6d60acb _public_6d60acb

PROC_DECLARE(0x6d60ab0, internal_6d60ab0, public_6d60ab0);
/* CHUNK of public_6cf64d0 */
extern "C" NAKED register_t __cdecl internal_6d60ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d60abc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d60acb : nop
        mov eax, offset public_6d71408
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ab0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60abc, public_6d60abc)
        ASM_EXPORT_ENTRY_LAST(0x6d60acb, public_6d60acb)
    }
}

#undef public_6d60abc
#undef public_6d60acb

#pragma init_seg(compiler)
extern "C" void const* const public_6d60abc = __AsmFindLabelExport(&internal_6d60ab0, 0x6d60abc);
extern "C" void const* const public_6d60acb = __AsmFindLabelExport(&internal_6d60ab0, 0x6d60acb);
