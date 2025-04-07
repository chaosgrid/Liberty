#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9890);
CLANG_FORWARD_PROC_SYMBOL(public_6beb7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be98ba _public_6be98ba

PROC_DECLARE(0x6be9890, internal_6be9890, public_6be9890);
extern "C" NAKED register_t __cdecl internal_6be9890()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be98ba
        mov ecx, eax
        call public_6beb7a0
        test eax, eax
        je public_6be98ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be98ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9890)
    }
}

#undef public_6be98ba
