#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9d6b _public_5b9d6b
#define public_5b9d79 _public_5b9d79

PROC_DECLARE(0x5b9d60, internal_5b9d60, public_5b9d60);
/* CHUNK of public_44e430 */
extern "C" NAKED register_t __cdecl internal_5b9d60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xA0]
        jmp public_445ea0
        public_5b9d6b : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9d79 : nop
        mov eax, offset public_5f400c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9d60)
        ASM_EXPORT_ENTRY_FIRST(0x5b9d6b, public_5b9d6b)
        ASM_EXPORT_ENTRY_LAST(0x5b9d79, public_5b9d79)
    }
}

#undef public_5b9d6b
#undef public_5b9d79

#pragma init_seg(compiler)
extern "C" void const* const public_5b9d6b = __AsmFindLabelExport(&internal_5b9d60, 0x5b9d6b);
extern "C" void const* const public_5b9d79 = __AsmFindLabelExport(&internal_5b9d60, 0x5b9d79);
