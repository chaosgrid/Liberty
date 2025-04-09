#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bd928 _public_5bd928
#define public_5bd93e _public_5bd93e

PROC_DECLARE(0x5bd920, internal_5bd920, public_5bd920);
/* CHUNK of public_4c98f0 */
extern "C" NAKED register_t __cdecl internal_5bd920()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4a2d30
/*FIXUP public_5bd928 : nop
        push offset _public_420d10 @0x5bd928*/
  FIXUP public_5bd928 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        push eax
        call public_5b7ec6
        ret 
        public_5bd93e : nop
        mov eax, offset public_5f7da0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd920)
        ASM_EXPORT_ENTRY_FIRST(0x5bd928, public_5bd928)
        ASM_EXPORT_ENTRY_LAST(0x5bd93e, public_5bd93e)
    }
}

#undef public_5bd928
#undef public_5bd93e

#pragma init_seg(compiler)
extern "C" void const* const public_5bd928 = __AsmFindLabelExport(&internal_5bd920, 0x5bd928);
extern "C" void const* const public_5bd93e = __AsmFindLabelExport(&internal_5bd920, 0x5bd93e);
