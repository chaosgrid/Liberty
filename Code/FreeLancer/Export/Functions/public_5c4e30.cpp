#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4e38 _public_5c4e38

PROC_DECLARE(0x5c4e30, internal_5c4e30, public_5c4e30);
/* CHUNK of public_59d410 */
extern "C" NAKED register_t __cdecl internal_5c4e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_576010
        public_5c4e38 : nop
        mov eax, offset public_5febe8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4e30)
        ASM_EXPORT_ENTRY_SINGLE(0x5c4e38, public_5c4e38)
    }
}

#undef public_5c4e38

#pragma init_seg(compiler)
extern "C" void const* const public_5c4e38 = __AsmFindLabelExport(&internal_5c4e30, 0x5c4e38);
