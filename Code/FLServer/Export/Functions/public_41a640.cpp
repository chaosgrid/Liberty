#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41922a);
CLANG_FORWARD_PROC_SYMBOL(public_419230);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a648 _public_41a648
#define public_41a656 _public_41a656

PROC_DECLARE(0x41a640, internal_41a640, public_41a640);
/* CHUNK of public_411e50 */
extern "C" NAKED register_t __cdecl internal_41a640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_419230
        public_41a648 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC4
        jmp public_41922a
        public_41a656 : nop
        mov eax, offset public_41f768
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a640)
        ASM_EXPORT_ENTRY_FIRST(0x41a648, public_41a648)
        ASM_EXPORT_ENTRY_LAST(0x41a656, public_41a656)
    }
}

#undef public_41a648
#undef public_41a656

#pragma init_seg(compiler)
extern "C" void const* const public_41a648 = __AsmFindLabelExport(&internal_41a640, 0x41a648);
extern "C" void const* const public_41a656 = __AsmFindLabelExport(&internal_41a640, 0x41a656);
