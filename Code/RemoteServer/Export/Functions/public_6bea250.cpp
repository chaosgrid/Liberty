#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea250);
CLANG_FORWARD_PROC_SYMBOL(public_6beaf40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea27a _public_6bea27a

PROC_DECLARE(0x6bea250, internal_6bea250, public_6bea250);
extern "C" NAKED register_t __cdecl internal_6bea250()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea27a
        mov ecx, eax
        call public_6beaf40
        test eax, eax
        je public_6bea27a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea27a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea250)
    }
}

#undef public_6bea27a
