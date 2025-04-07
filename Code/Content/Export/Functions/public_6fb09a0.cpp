#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb09ab _public_6fb09ab
#define public_6fb09b3 _public_6fb09b3

PROC_DECLARE(0x6fb09a0, internal_6fb09a0, public_6fb09a0);
/* CHUNK of public_6f84820 */
extern "C" NAKED register_t __cdecl internal_6fb09a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb09ab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ed61d0
        public_6fb09b3 : nop
        mov eax, offset public_6fc5c58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb09a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb09ab, public_6fb09ab)
        ASM_EXPORT_ENTRY_LAST(0x6fb09b3, public_6fb09b3)
    }
}

#undef public_6fb09ab
#undef public_6fb09b3

#pragma init_seg(compiler)
extern "C" void const* const public_6fb09ab = __AsmFindLabelExport(&internal_6fb09a0, 0x6fb09ab);
extern "C" void const* const public_6fb09b3 = __AsmFindLabelExport(&internal_6fb09a0, 0x6fb09b3);
