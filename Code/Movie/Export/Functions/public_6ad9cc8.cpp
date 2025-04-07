#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf47a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c7a);

#define public_6ad9cd0 _public_6ad9cd0

PROC_DECLARE(0x6ad9cc8, internal_6ad9cc8, public_6ad9cc8);
/* CHUNK of public_6ad9768 */
extern "C" NAKED register_t __cdecl internal_6ad9cc8()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ad9c7a
        public_6ad9cd0 : nop
        mov eax, offset public_6adb4b8
        jmp public_6acf47a
        UNREACHABLE_TRAP(0x6ad9cc8)
        ASM_EXPORT_ENTRY_SINGLE(0x6ad9cd0, public_6ad9cd0)
    }
}

#undef public_6ad9cd0

#pragma init_seg(compiler)
extern "C" void const* const public_6ad9cd0 = __AsmFindLabelExport(&internal_6ad9cc8, 0x6ad9cd0);
