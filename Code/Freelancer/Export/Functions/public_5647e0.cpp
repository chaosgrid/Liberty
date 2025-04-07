#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5647e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5647f0 _public_5647f0
#define public_56480b _public_56480b
#define public_564814 _public_564814
#define public_56482f _public_56482f

PROC_DECLARE(0x5647e0, internal_5647e0, public_5647e0);
extern "C" NAKED register_t __cdecl internal_5647e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67a570]
        test eax, eax
        je public_56480b
        lea esp, ss:[esp]
        public_5647f0 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        push eax
        mov dword ptr ds : [public_67a570], ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67a570]
        add esp, 4
        test eax, eax
        jne public_5647f0
        public_56480b : nop
        mov eax, dword ptr ds : [public_67a574]
        test eax, eax
        je public_56482f
        public_564814 : nop
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [public_67a574], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67a574]
        add esp, 4
        test eax, eax
        jne public_564814
        public_56482f : nop
        ret 
        UNREACHABLE_TRAP(0x5647e0)
    }
}

#undef public_5647f0
#undef public_56480b
#undef public_564814
#undef public_56482f
