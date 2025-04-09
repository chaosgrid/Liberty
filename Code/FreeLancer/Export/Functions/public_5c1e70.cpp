#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1e7b _public_5c1e7b
#define public_5c1e84 _public_5c1e84

PROC_DECLARE(0x5c1e70, internal_5c1e70, public_5c1e70);
/* CHUNK of public_564060 */
extern "C" NAKED register_t __cdecl internal_5c1e70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c1e7b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c6e50]
        public_5c1e84 : nop
        mov eax, offset public_5fc0f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1e70)
        ASM_EXPORT_ENTRY_FIRST(0x5c1e7b, public_5c1e7b)
        ASM_EXPORT_ENTRY_LAST(0x5c1e84, public_5c1e84)
    }
}

#undef public_5c1e7b
#undef public_5c1e84

#pragma init_seg(compiler)
extern "C" void const* const public_5c1e7b = __AsmFindLabelExport(&internal_5c1e70, 0x5c1e7b);
extern "C" void const* const public_5c1e84 = __AsmFindLabelExport(&internal_5c1e70, 0x5c1e84);
