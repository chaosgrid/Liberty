#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c1e3b _public_5c1e3b
#define public_5c1e43 _public_5c1e43

PROC_DECLARE(0x5c1e30, internal_5c1e30, public_5c1e30);
/* CHUNK of public_563900 */
extern "C" NAKED register_t __cdecl internal_5c1e30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c1e3b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c1e43 : nop
        mov eax, offset public_5fc0a0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1e30)
        ASM_EXPORT_ENTRY_FIRST(0x5c1e3b, public_5c1e3b)
        ASM_EXPORT_ENTRY_LAST(0x5c1e43, public_5c1e43)
    }
}

#undef public_5c1e3b
#undef public_5c1e43

#pragma init_seg(compiler)
extern "C" void const* const public_5c1e3b = __AsmFindLabelExport(&internal_5c1e30, 0x5c1e3b);
extern "C" void const* const public_5c1e43 = __AsmFindLabelExport(&internal_5c1e30, 0x5c1e43);
