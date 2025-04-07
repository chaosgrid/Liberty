#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdff9 _public_5bdff9

PROC_DECLARE(0x5bdff0, internal_5bdff0, public_5bdff0);
/* CHUNK of public_4d4a40 */
extern "C" NAKED register_t __cdecl internal_5bdff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bdff9 : nop
        mov eax, offset public_5f8388
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdff0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bdff9, public_5bdff9)
    }
}

#undef public_5bdff9

#pragma init_seg(compiler)
extern "C" void const* const public_5bdff9 = __AsmFindLabelExport(&internal_5bdff0, 0x5bdff9);
