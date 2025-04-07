#include "Server-PCH.h"


#define public_6d5f503 _public_6d5f503
#define public_6d5f50e _public_6d5f50e
#define public_6d5f51c _public_6d5f51c

PROC_DECLARE(0x6d5f4e0, internal_6d5f4e0, public_6d5f4e0);
extern "C" NAKED register_t __cdecl internal_6d5f4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_6d64698]
        add esp, 0xC
        test eax, eax
        jne public_6d5f503
        ret 
        public_6d5f503 : nop
        cmp eax, 0xFFFFFFFF
        jne public_6d5f50e
        mov eax, 0xFFFFFFFE
        ret 
        public_6d5f50e : nop
        cmp eax, 0xFFFFFFFE
        mov eax, 0xFFFFFFFD
        je public_6d5f51c
        mov eax, dword ptr ss : [esp+0xC]
        public_6d5f51c : nop
        ret 
        UNREACHABLE_TRAP(0x6d5f4e0)
    }
}

#undef public_6d5f503
#undef public_6d5f50e
#undef public_6d5f51c
