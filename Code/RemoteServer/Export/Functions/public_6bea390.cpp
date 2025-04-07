#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea390);
CLANG_FORWARD_PROC_SYMBOL(public_6beb2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea3ba _public_6bea3ba

PROC_DECLARE(0x6bea390, internal_6bea390, public_6bea390);
extern "C" NAKED register_t __cdecl internal_6bea390()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea3ba
        mov ecx, eax
        call public_6beb2a0
        test eax, eax
        je public_6bea3ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea3ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea390)
    }
}

#undef public_6bea3ba
