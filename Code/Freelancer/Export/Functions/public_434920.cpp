#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_434927 _public_434927

PROC_DECLARE(0x434920, internal_434920, public_434920);
extern "C" NAKED register_t __cdecl internal_434920()
{
    __asm
    {
        xor edx, edx
        xor eax, eax
        or ecx, 0xFFFFFFFF
        public_434927 : nop
        mov dword ptr ds : [eax+public_667e50], ecx
        mov dword ptr ds : [eax+public_668250], edx
        add eax, 4
        cmp eax, 0x400
        jl public_434927
/*FIXUP push offset _public_434950 @0x43493d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_434950
        mov dword ptr ds : [public_668650], edx
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x434920)
    }
}

#undef public_434927
