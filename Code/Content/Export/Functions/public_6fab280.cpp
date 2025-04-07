#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab288 _public_6fab288
#define public_6fab290 _public_6fab290

PROC_DECLARE(0x6fab280, internal_6fab280, public_6fab280);
/* CHUNK of public_6ed74d0 */
extern "C" NAKED register_t __cdecl internal_6fab280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x54]
        jmp public_6ed61d0
        public_6fab288 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_6eec8d0
        public_6fab290 : nop
        mov eax, offset public_6fbf80c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab280)
        ASM_EXPORT_ENTRY_FIRST(0x6fab288, public_6fab288)
        ASM_EXPORT_ENTRY_LAST(0x6fab290, public_6fab290)
    }
}

#undef public_6fab288
#undef public_6fab290

#pragma init_seg(compiler)
extern "C" void const* const public_6fab288 = __AsmFindLabelExport(&internal_6fab280, 0x6fab288);
extern "C" void const* const public_6fab290 = __AsmFindLabelExport(&internal_6fab280, 0x6fab290);
