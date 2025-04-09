#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c09d8 _public_5c09d8

PROC_DECLARE(0x5c09d0, internal_5c09d0, public_5c09d0);
/* CHUNK of public_5375d0 */
extern "C" NAKED register_t __cdecl internal_5c09d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_410ab0
        public_5c09d8 : nop
        mov eax, offset public_5fac00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c09d0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c09d8, public_5c09d8)
    }
}

#undef public_5c09d8

#pragma init_seg(compiler)
extern "C" void const* const public_5c09d8 = __AsmFindLabelExport(&internal_5c09d0, 0x5c09d8);
