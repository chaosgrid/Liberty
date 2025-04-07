#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639797e _public_639797e
#define public_6397989 _public_6397989

PROC_DECLARE(0x6397970, internal_6397970, public_6397970);
/* CHUNK of public_6343940 */
extern "C" NAKED register_t __cdecl internal_6397970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x26C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639797e : nop
        lea ecx, ss:[ebp-0x214]
        jmp public_63449d0
        public_6397989 : nop
        mov eax, offset public_63b1bc0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397970)
        ASM_EXPORT_ENTRY_FIRST(0x639797e, public_639797e)
        ASM_EXPORT_ENTRY_LAST(0x6397989, public_6397989)
    }
}

#undef public_639797e
#undef public_6397989

#pragma init_seg(compiler)
extern "C" void const* const public_639797e = __AsmFindLabelExport(&internal_6397970, 0x639797e);
extern "C" void const* const public_6397989 = __AsmFindLabelExport(&internal_6397970, 0x6397989);
