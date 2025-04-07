#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea410);
CLANG_FORWARD_PROC_SYMBOL(public_6beb360);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea43a _public_6bea43a

PROC_DECLARE(0x6bea410, internal_6bea410, public_6bea410);
extern "C" NAKED register_t __cdecl internal_6bea410()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea43a
        mov ecx, eax
        call public_6beb360
        test eax, eax
        je public_6bea43a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea43a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea410)
    }
}

#undef public_6bea43a
