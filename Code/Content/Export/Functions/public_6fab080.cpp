#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab088 _public_6fab088

PROC_DECLARE(0x6fab080, internal_6fab080, public_6fab080);
/* CHUNK of public_6ecfa90 */
extern "C" NAKED register_t __cdecl internal_6fab080()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6fab088 : nop
        mov eax, offset public_6fbf5a8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab080)
        ASM_EXPORT_ENTRY_SINGLE(0x6fab088, public_6fab088)
    }
}

#undef public_6fab088

#pragma init_seg(compiler)
extern "C" void const* const public_6fab088 = __AsmFindLabelExport(&internal_6fab080, 0x6fab088);
