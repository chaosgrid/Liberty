#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5ddd2 _public_6d5ddd2
#define public_6d5dde1 _public_6d5dde1
#define public_6d5dde9 _public_6d5dde9

PROC_DECLARE(0x6d5ddc0, internal_6d5ddc0, public_6d5ddc0);
extern "C" NAKED register_t __cdecl internal_6d5ddc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        jne public_6d5ddd2
        ret 
        public_6d5ddd2 : nop
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        jne public_6d5dde1
        ret 
        public_6d5dde1 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_6d5dde9
        ret 
        public_6d5dde9 : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea ecx, ds:[eax+0x142C]
        call dword ptr ds : [public_6d649d8]
        ret 
        UNREACHABLE_TRAP(0x6d5ddc0)
    }
}

#undef public_6d5ddd2
#undef public_6d5dde1
#undef public_6d5dde9
