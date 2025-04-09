#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb728 _public_5bb728

PROC_DECLARE(0x5bb720, internal_5bb720, public_5bb720);
/* CHUNK of public_46a0c0 */
extern "C" NAKED register_t __cdecl internal_5bb720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_576010
        public_5bb728 : nop
        mov eax, offset public_5f5934
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb720)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb728, public_5bb728)
    }
}

#undef public_5bb728

#pragma init_seg(compiler)
extern "C" void const* const public_5bb728 = __AsmFindLabelExport(&internal_5bb720, 0x5bb728);
