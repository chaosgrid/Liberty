#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333220);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63975a8 _public_63975a8

PROC_DECLARE(0x63975a0, internal_63975a0, public_63975a0);
/* CHUNK of public_6333080 */
extern "C" NAKED register_t __cdecl internal_63975a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6333220
        public_63975a8 : nop
        mov eax, offset public_63b1774
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63975a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63975a8, public_63975a8)
    }
}

#undef public_63975a8

#pragma init_seg(compiler)
extern "C" void const* const public_63975a8 = __AsmFindLabelExport(&internal_63975a0, 0x63975a8);
