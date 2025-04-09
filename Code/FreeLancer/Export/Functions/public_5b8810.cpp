#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b881b _public_5b881b
#define public_5b8826 _public_5b8826
#define public_5b882e _public_5b882e

PROC_DECLARE(0x5b8810, internal_5b8810, public_5b8810);
/* CHUNK of public_414640 */
extern "C" NAKED register_t __cdecl internal_5b8810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b881b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b8826 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_414790
        public_5b882e : nop
        mov eax, offset public_5f2630
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8810)
        ASM_EXPORT_ENTRY_FIRST(0x5b881b, public_5b881b)
        ASM_EXPORT_ENTRY(0x5b8826, public_5b8826)
        ASM_EXPORT_ENTRY_LAST(0x5b882e, public_5b882e)
    }
}

#undef public_5b881b
#undef public_5b8826
#undef public_5b882e

#pragma init_seg(compiler)
extern "C" void const* const public_5b881b = __AsmFindLabelExport(&internal_5b8810, 0x5b881b);
extern "C" void const* const public_5b8826 = __AsmFindLabelExport(&internal_5b8810, 0x5b8826);
extern "C" void const* const public_5b882e = __AsmFindLabelExport(&internal_5b8810, 0x5b882e);
