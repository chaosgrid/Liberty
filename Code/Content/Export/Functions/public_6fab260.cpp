#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab26b _public_6fab26b

PROC_DECLARE(0x6fab260, internal_6fab260, public_6fab260);
/* CHUNK of public_6ed6dd0 */
extern "C" NAKED register_t __cdecl internal_6fab260()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20C]
        jmp public_6ed61d0
        public_6fab26b : nop
        mov eax, offset public_6fbf7bc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab260)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab26b, public_6fab26b)
    }
}

#undef public_6fab26b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab26b = __AsmFindLabelExport(&internal_6fab260, 0x6fab26b);
