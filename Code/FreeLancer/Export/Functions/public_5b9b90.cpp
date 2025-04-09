#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9b98 _public_5b9b98
#define public_5b9ba3 _public_5b9ba3

PROC_DECLARE(0x5b9b90, internal_5b9b90, public_5b9b90);
/* CHUNK of public_44a030 */
extern "C" NAKED register_t __cdecl internal_5b9b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_445ea0
        public_5b9b98 : nop
        mov eax, dword ptr ss : [ebp-0x74]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9ba3 : nop
        mov eax, offset public_5f3c24
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9b90)
        ASM_EXPORT_ENTRY_FIRST(0x5b9b98, public_5b9b98)
        ASM_EXPORT_ENTRY_LAST(0x5b9ba3, public_5b9ba3)
    }
}

#undef public_5b9b98
#undef public_5b9ba3

#pragma init_seg(compiler)
extern "C" void const* const public_5b9b98 = __AsmFindLabelExport(&internal_5b9b90, 0x5b9b98);
extern "C" void const* const public_5b9ba3 = __AsmFindLabelExport(&internal_5b9b90, 0x5b9ba3);
