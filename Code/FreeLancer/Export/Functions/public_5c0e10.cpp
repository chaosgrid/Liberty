#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0e1b _public_5c0e1b
#define public_5c0e27 _public_5c0e27

PROC_DECLARE(0x5c0e10, internal_5c0e10, public_5c0e10);
/* CHUNK of public_543530 */
extern "C" NAKED register_t __cdecl internal_5c0e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0e1b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call dword ptr ds : [public_5c69b0]
        pop ecx
        ret 
        public_5c0e27 : nop
        mov eax, offset public_5fb0b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0e10)
        ASM_EXPORT_ENTRY_FIRST(0x5c0e1b, public_5c0e1b)
        ASM_EXPORT_ENTRY_LAST(0x5c0e27, public_5c0e27)
    }
}

#undef public_5c0e1b
#undef public_5c0e27

#pragma init_seg(compiler)
extern "C" void const* const public_5c0e1b = __AsmFindLabelExport(&internal_5c0e10, 0x5c0e1b);
extern "C" void const* const public_5c0e27 = __AsmFindLabelExport(&internal_5c0e10, 0x5c0e27);
