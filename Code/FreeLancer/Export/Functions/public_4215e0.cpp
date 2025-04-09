#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215e0);

#define public_4215f1 _public_4215f1
#define public_4215f9 _public_4215f9

PROC_DECLARE(0x4215e0, internal_4215e0, public_4215e0);
extern "C" NAKED register_t __cdecl internal_4215e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        xor esi, esi
        test ah, 0x40
        je public_4215f1
        mov esi, 1
        public_4215f1 : nop
        test ah, 1
        je public_4215f9
        or esi, 2
        public_4215f9 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x3F800000
        push 0
        push eax
        call dword ptr ds : [ecx+0x5C]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4215e0)
    }
}

#undef public_4215f1
#undef public_4215f9
