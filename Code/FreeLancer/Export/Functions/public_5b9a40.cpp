#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9a48 _public_5b9a48
#define public_5b9a53 _public_5b9a53

PROC_DECLARE(0x5b9a40, internal_5b9a40, public_5b9a40);
/* CHUNK of public_448700 */
extern "C" NAKED register_t __cdecl internal_5b9a40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_401e90
        public_5b9a48 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9a53 : nop
        mov eax, offset public_5f3ad0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9a40)
        ASM_EXPORT_ENTRY_FIRST(0x5b9a48, public_5b9a48)
        ASM_EXPORT_ENTRY_LAST(0x5b9a53, public_5b9a53)
    }
}

#undef public_5b9a48
#undef public_5b9a53

#pragma init_seg(compiler)
extern "C" void const* const public_5b9a48 = __AsmFindLabelExport(&internal_5b9a40, 0x5b9a48);
extern "C" void const* const public_5b9a53 = __AsmFindLabelExport(&internal_5b9a40, 0x5b9a53);
