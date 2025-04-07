#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea450);
CLANG_FORWARD_PROC_SYMBOL(public_6beb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea47a _public_6bea47a

PROC_DECLARE(0x6bea450, internal_6bea450, public_6bea450);
extern "C" NAKED register_t __cdecl internal_6bea450()
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
        je public_6bea47a
        mov ecx, eax
        call public_6beb5a0
        test eax, eax
        je public_6bea47a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea47a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea450)
    }
}

#undef public_6bea47a
