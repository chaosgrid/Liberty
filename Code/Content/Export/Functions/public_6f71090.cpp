#include "Content-PCH.h"


#define public_6f710ac _public_6f710ac
#define public_6f710c1 _public_6f710c1
#define public_6f710d6 _public_6f710d6
#define public_6f710eb _public_6f710eb
#define public_6f710fb _public_6f710fb

PROC_DECLARE(0x6f71090, internal_6f71090, public_6f71090);
extern "C" NAKED register_t __cdecl internal_6f71090()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx]
        test eax, eax
        jl public_6f710fb
        jne public_6f710ac
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x14]
        xor al, al
        ret 8
        public_6f710ac : nop
        cmp eax, 1
        jne public_6f710c1
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x18]
        xor al, al
        ret 8
        public_6f710c1 : nop
        cmp eax, 2
        jne public_6f710d6
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x1C]
        xor al, al
        ret 8
        public_6f710d6 : nop
        cmp eax, 3
        jne public_6f710eb
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x20]
        xor al, al
        ret 8
        public_6f710eb : nop
        cmp eax, 4
        jne public_6f710fb
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0x24]
        public_6f710fb : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6f71090)
    }
}

#undef public_6f710ac
#undef public_6f710c1
#undef public_6f710d6
#undef public_6f710eb
#undef public_6f710fb
