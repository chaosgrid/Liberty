#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab24b _public_6fab24b
#define public_6fab253 _public_6fab253

PROC_DECLARE(0x6fab240, internal_6fab240, public_6fab240);
/* CHUNK of public_6ed65c0 */
extern "C" NAKED register_t __cdecl internal_6fab240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fab24b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ed61d0
        public_6fab253 : nop
        mov eax, offset public_6fbf774
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab240)
        ASM_EXPORT_ENTRY_FIRST(0x6fab24b, public_6fab24b)
        ASM_EXPORT_ENTRY_LAST(0x6fab253, public_6fab253)
    }
}

#undef public_6fab24b
#undef public_6fab253

#pragma init_seg(compiler)
extern "C" void const* const public_6fab24b = __AsmFindLabelExport(&internal_6fab240, 0x6fab24b);
extern "C" void const* const public_6fab253 = __AsmFindLabelExport(&internal_6fab240, 0x6fab253);
