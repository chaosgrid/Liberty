#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bf81b _public_5bf81b
#define public_5bf831 _public_5bf831

PROC_DECLARE(0x5bf810, internal_5bf810, public_5bf810);
/* CHUNK of public_502ba0 */
extern "C" NAKED register_t __cdecl internal_5bf810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x58]
        add ecx, 0x1C
        jmp public_502d90
/*FIXUP public_5bf81b : nop
        push offset _public_502e00 @0x5bf81b*/
  FIXUP public_5bf81b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
        push 5
        push 0x24
        mov eax, dword ptr ss : [ebp-0x58]
        add eax, 0x2C
        push eax
        call public_5b7ec6
        ret 
        public_5bf831 : nop
        mov eax, offset public_5f9794
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf810)
        ASM_EXPORT_ENTRY_FIRST(0x5bf81b, public_5bf81b)
        ASM_EXPORT_ENTRY_LAST(0x5bf831, public_5bf831)
    }
}

#undef public_5bf81b
#undef public_5bf831

#pragma init_seg(compiler)
extern "C" void const* const public_5bf81b = __AsmFindLabelExport(&internal_5bf810, 0x5bf81b);
extern "C" void const* const public_5bf831 = __AsmFindLabelExport(&internal_5bf810, 0x5bf831);
