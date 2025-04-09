#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_54bbd0);

#define public_54bc00 _public_54bc00

PROC_DECLARE(0x54bbd0, internal_54bbd0, public_54bbd0);
extern "C" NAKED register_t __cdecl internal_54bbd0()
{
    __asm
    {
        cmp dword ptr ds : [public_679738], offset public_679634
        je public_54bc00
/*FIXUP push offset public_5e0818 @0x54bbdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0818
        push 0x8AD
/*FIXUP push offset public_5e0704 @0x54bbe6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0704
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x54bbf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_54bc00 : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, offset public_679634
        call public_51ebd0
        ret 
        UNREACHABLE_TRAP(0x54bbd0)
    }
}

#undef public_54bc00
