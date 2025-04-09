#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd389 _public_5bd389
#define public_5bd39a _public_5bd39a

PROC_DECLARE(0x5bd380, internal_5bd380, public_5bd380);
/* CHUNK of public_4ba430 */
extern "C" NAKED register_t __cdecl internal_5bd380()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c6098]
        public_5bd389 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bd39a : nop
        mov eax, offset public_5f7690
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd380)
        ASM_EXPORT_ENTRY_FIRST(0x5bd389, public_5bd389)
        ASM_EXPORT_ENTRY_LAST(0x5bd39a, public_5bd39a)
    }
}

#undef public_5bd389
#undef public_5bd39a

#pragma init_seg(compiler)
extern "C" void const* const public_5bd389 = __AsmFindLabelExport(&internal_5bd380, 0x5bd389);
extern "C" void const* const public_5bd39a = __AsmFindLabelExport(&internal_5bd380, 0x5bd39a);
