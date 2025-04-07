#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66171d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6617212 _public_6617212

PROC_DECLARE(0x66171d0, internal_66171d0, public_66171d0);
extern "C" NAKED register_t __cdecl internal_66171d0()
{
    __asm
    {
        push esi
        push 0xC
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6617212
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_662a060
        mov dword ptr ds : [esi], offset public_662934c
        call dword ptr ds : [public_6629000]
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_662a060 @0x6617202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a060
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6617212 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66171d0)
    }
}

#undef public_6617212
