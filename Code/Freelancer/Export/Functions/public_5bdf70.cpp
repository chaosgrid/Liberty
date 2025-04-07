#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d42e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bdf7b _public_5bdf7b
#define public_5bdf91 _public_5bdf91

PROC_DECLARE(0x5bdf70, internal_5bdf70, public_5bdf70);
/* CHUNK of public_4d4340 */
extern "C" NAKED register_t __cdecl internal_5bdf70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xF4]
        jmp public_4d42e0
/*FIXUP public_5bdf7b : nop
        push offset _public_4d42e0 @0x5bdf7b*/
  FIXUP public_5bdf7b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d42e0
        push 0x10
        push 0xC
        lea eax, ss:[ebp-0xCC]
        push eax
        call public_5b7ec6
        ret 
        public_5bdf91 : nop
        mov eax, offset public_5f8314
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdf70)
        ASM_EXPORT_ENTRY_FIRST(0x5bdf7b, public_5bdf7b)
        ASM_EXPORT_ENTRY_LAST(0x5bdf91, public_5bdf91)
    }
}

#undef public_5bdf7b
#undef public_5bdf91

#pragma init_seg(compiler)
extern "C" void const* const public_5bdf7b = __AsmFindLabelExport(&internal_5bdf70, 0x5bdf7b);
extern "C" void const* const public_5bdf91 = __AsmFindLabelExport(&internal_5bdf70, 0x5bdf91);
