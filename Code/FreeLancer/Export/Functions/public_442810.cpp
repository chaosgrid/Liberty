#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_441c70);
CLANG_FORWARD_PROC_SYMBOL(public_442810);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_44283e _public_44283e

PROC_DECLARE(0x442810, internal_442810, public_442810);
extern "C" NAKED register_t __cdecl internal_442810()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x442810*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_44283e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_44283e
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        push edx
        mov ecx, eax
        call public_441c70
        ret 
        public_44283e : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x442810)
    }
}

#undef public_44283e
