#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c14bb _public_5c14bb
#define public_5c14c3 _public_5c14c3

PROC_DECLARE(0x5c14b0, internal_5c14b0, public_5c14b0);
/* CHUNK of public_556280 */
extern "C" NAKED register_t __cdecl internal_5c14b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c14bb : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        jmp public_556bd0
        public_5c14c3 : nop
        mov eax, offset public_5fb818
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c14b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c14bb, public_5c14bb)
        ASM_EXPORT_ENTRY_LAST(0x5c14c3, public_5c14c3)
    }
}

#undef public_5c14bb
#undef public_5c14c3

#pragma init_seg(compiler)
extern "C" void const* const public_5c14bb = __AsmFindLabelExport(&internal_5c14b0, 0x5c14bb);
extern "C" void const* const public_5c14c3 = __AsmFindLabelExport(&internal_5c14b0, 0x5c14c3);
