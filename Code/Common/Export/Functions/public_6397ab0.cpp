#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345280);
CLANG_FORWARD_PROC_SYMBOL(public_6345290);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397ab8 _public_6397ab8
#define public_6397ac0 _public_6397ac0
#define public_6397acb _public_6397acb

PROC_DECLARE(0x6397ab0, internal_6397ab0, public_6397ab0);
/* CHUNK of public_6345100 */
extern "C" NAKED register_t __cdecl internal_6397ab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_6345280
        public_6397ab8 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_6345290
        public_6397ac0 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397acb : nop
        mov eax, offset public_63b1d28
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397ab0)
        ASM_EXPORT_ENTRY_FIRST(0x6397ab8, public_6397ab8)
        ASM_EXPORT_ENTRY(0x6397ac0, public_6397ac0)
        ASM_EXPORT_ENTRY_LAST(0x6397acb, public_6397acb)
    }
}

#undef public_6397ab8
#undef public_6397ac0
#undef public_6397acb

#pragma init_seg(compiler)
extern "C" void const* const public_6397ab8 = __AsmFindLabelExport(&internal_6397ab0, 0x6397ab8);
extern "C" void const* const public_6397ac0 = __AsmFindLabelExport(&internal_6397ab0, 0x6397ac0);
extern "C" void const* const public_6397acb = __AsmFindLabelExport(&internal_6397ab0, 0x6397acb);
