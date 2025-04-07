#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414790);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5b8899 _public_5b8899
#define public_5b88a4 _public_5b88a4

PROC_DECLARE(0x5b8880, internal_5b8880, public_5b8880);
/* CHUNK of public_4155c0 */
extern "C" NAKED register_t __cdecl internal_5b8880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
/*FIXUP push offset _public_444e20 @0x5b8880*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444e20
        push 0x400
        push 8
        lea eax, ss:[ebp-0x200C]
        push eax
        call public_5b7ec6
        ret 
        public_5b8899 : nop
        lea ecx, ss:[ebp-0x201C]
        jmp public_414790
        public_5b88a4 : nop
        mov eax, offset public_5f26ec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8880)
        ASM_EXPORT_ENTRY_FIRST(0x5b8899, public_5b8899)
        ASM_EXPORT_ENTRY_LAST(0x5b88a4, public_5b88a4)
    }
}

#undef public_5b8899
#undef public_5b88a4

#pragma init_seg(compiler)
extern "C" void const* const public_5b8899 = __AsmFindLabelExport(&internal_5b8880, 0x5b8899);
extern "C" void const* const public_5b88a4 = __AsmFindLabelExport(&internal_5b8880, 0x5b88a4);
