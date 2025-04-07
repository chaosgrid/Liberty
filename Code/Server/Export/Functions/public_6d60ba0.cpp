#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60bac _public_6d60bac
#define public_6d60bbb _public_6d60bbb

PROC_DECLARE(0x6d60ba0, internal_6d60ba0, public_6d60ba0);
/* CHUNK of public_6cf80d0 */
extern "C" NAKED register_t __cdecl internal_6d60ba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d60bac : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d60bbb : nop
        mov eax, offset public_6d71520
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ba0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60bac, public_6d60bac)
        ASM_EXPORT_ENTRY_LAST(0x6d60bbb, public_6d60bbb)
    }
}

#undef public_6d60bac
#undef public_6d60bbb

#pragma init_seg(compiler)
extern "C" void const* const public_6d60bac = __AsmFindLabelExport(&internal_6d60ba0, 0x6d60bac);
extern "C" void const* const public_6d60bbb = __AsmFindLabelExport(&internal_6d60ba0, 0x6d60bbb);
