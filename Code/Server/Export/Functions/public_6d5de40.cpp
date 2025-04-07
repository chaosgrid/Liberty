#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5de54 _public_6d5de54
#define public_6d5de65 _public_6d5de65
#define public_6d5de6f _public_6d5de6f

PROC_DECLARE(0x6d5de40, internal_6d5de40, public_6d5de40);
extern "C" NAKED register_t __cdecl internal_6d5de40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5de54
        xor al, al
        ret 
        public_6d5de54 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5de65
        xor al, al
        ret 
        public_6d5de65 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6d5de6f
        xor al, al
        ret 
        public_6d5de6f : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        lea ecx, ds:[eax+0x142C]
        call dword ptr ds : [public_6d649e0]
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6d5de40)
    }
}

#undef public_6d5de54
#undef public_6d5de65
#undef public_6d5de6f
