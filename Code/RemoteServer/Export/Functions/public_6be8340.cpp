#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8340);
CLANG_FORWARD_PROC_SYMBOL(public_6be8380);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be836a _public_6be836a

PROC_DECLARE(0x6be8340, internal_6be8340, public_6be8340);
extern "C" NAKED register_t __cdecl internal_6be8340()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x4C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be836a
        mov ecx, eax
        call public_6be8380
        test eax, eax
        je public_6be836a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be836a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be8340)
    }
}

#undef public_6be836a
