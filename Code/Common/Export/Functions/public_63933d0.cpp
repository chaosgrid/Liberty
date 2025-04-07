#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63933d8 _public_63933d8

PROC_DECLARE(0x63933d0, internal_63933d0, public_63933d0);
/* CHUNK of public_6289e80 */
extern "C" NAKED register_t __cdecl internal_63933d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6289e50
        public_63933d8 : nop
        mov eax, offset public_63ac440
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63933d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63933d8, public_63933d8)
    }
}

#undef public_63933d8

#pragma init_seg(compiler)
extern "C" void const* const public_63933d8 = __AsmFindLabelExport(&internal_63933d0, 0x63933d8);
