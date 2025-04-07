#include "Freelancer-PCH.h"


#define public_5b473a _public_5b473a
#define public_5b4748 _public_5b4748

PROC_DECLARE(0x5b4700, internal_5b4700, public_5b4700);
extern "C" NAKED register_t __cdecl internal_5b4700()
{
    __asm
    {
        push ecx
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5b473a
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_5b473a
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        push 8
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp]
        test eax, eax
        jne public_5b4748
        public_5b473a : nop
        mov dword ptr ds : [public_67ed10], 0
        pop ecx
        ret 4
        public_5b4748 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_67ed10], eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5b4700)
    }
}

#undef public_5b473a
#undef public_5b4748
