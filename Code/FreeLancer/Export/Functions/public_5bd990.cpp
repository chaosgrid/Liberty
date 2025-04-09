#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bd9a6 _public_5bd9a6

PROC_DECLARE(0x5bd990, internal_5bd990, public_5bd990);
/* CHUNK of public_4ca530 */
extern "C" NAKED register_t __cdecl internal_5bd990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
/*FIXUP push offset _public_420d10 @0x5bd990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        push eax
        call public_5b7ec6
        ret 
        public_5bd9a6 : nop
        mov eax, offset public_5f7df8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd990)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd9a6, public_5bd9a6)
    }
}

#undef public_5bd9a6

#pragma init_seg(compiler)
extern "C" void const* const public_5bd9a6 = __AsmFindLabelExport(&internal_5bd990, 0x5bd9a6);
