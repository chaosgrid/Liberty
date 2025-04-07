#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bf84b _public_5bf84b
#define public_5bf861 _public_5bf861

PROC_DECLARE(0x5bf840, internal_5bf840, public_5bf840);
/* CHUNK of public_502e40 */
extern "C" NAKED register_t __cdecl internal_5bf840()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_502d90
/*FIXUP public_5bf84b : nop
        push offset _public_502e00 @0x5bf84b*/
  FIXUP public_5bf84b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
        push 5
        push 0x24
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x2C
        push eax
        call public_5b7ec6
        ret 
        public_5bf861 : nop
        mov eax, offset public_5f97c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf840)
        ASM_EXPORT_ENTRY_FIRST(0x5bf84b, public_5bf84b)
        ASM_EXPORT_ENTRY_LAST(0x5bf861, public_5bf861)
    }
}

#undef public_5bf84b
#undef public_5bf861

#pragma init_seg(compiler)
extern "C" void const* const public_5bf84b = __AsmFindLabelExport(&internal_5bf840, 0x5bf84b);
extern "C" void const* const public_5bf861 = __AsmFindLabelExport(&internal_5bf840, 0x5bf861);
