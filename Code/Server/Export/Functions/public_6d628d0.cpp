#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d628d8 _public_6d628d8
#define public_6d628e0 _public_6d628e0

PROC_DECLARE(0x6d628d0, internal_6d628d0, public_6d628d0);
/* CHUNK of public_6d22200 */
extern "C" NAKED register_t __cdecl internal_6d628d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d209f0
        public_6d628d8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d20a40
        public_6d628e0 : nop
        mov eax, offset public_6d73670
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d628d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d628d8, public_6d628d8)
        ASM_EXPORT_ENTRY_LAST(0x6d628e0, public_6d628e0)
    }
}

#undef public_6d628d8
#undef public_6d628e0

#pragma init_seg(compiler)
extern "C" void const* const public_6d628d8 = __AsmFindLabelExport(&internal_6d628d0, 0x6d628d8);
extern "C" void const* const public_6d628e0 = __AsmFindLabelExport(&internal_6d628d0, 0x6d628e0);
