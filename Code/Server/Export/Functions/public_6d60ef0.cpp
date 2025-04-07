#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60ef8 _public_6d60ef8
#define public_6d60f07 _public_6d60f07

PROC_DECLARE(0x6d60ef0, internal_6d60ef0, public_6d60ef0);
/* CHUNK of public_6d00f70 */
extern "C" NAKED register_t __cdecl internal_6d60ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ce6710
        public_6d60ef8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x94
        jmp dword ptr ds : [public_6d643f0]
        public_6d60f07 : nop
        mov eax, offset public_6d71a50
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60ef0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60ef8, public_6d60ef8)
        ASM_EXPORT_ENTRY_LAST(0x6d60f07, public_6d60f07)
    }
}

#undef public_6d60ef8
#undef public_6d60f07

#pragma init_seg(compiler)
extern "C" void const* const public_6d60ef8 = __AsmFindLabelExport(&internal_6d60ef0, 0x6d60ef8);
extern "C" void const* const public_6d60f07 = __AsmFindLabelExport(&internal_6d60ef0, 0x6d60f07);
