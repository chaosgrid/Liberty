#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea190);
CLANG_FORWARD_PROC_SYMBOL(public_6beb000);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea1ba _public_6bea1ba

PROC_DECLARE(0x6bea190, internal_6bea190, public_6bea190);
extern "C" NAKED register_t __cdecl internal_6bea190()
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
        je public_6bea1ba
        mov ecx, eax
        call public_6beb000
        test eax, eax
        je public_6bea1ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea1ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea190)
    }
}

#undef public_6bea1ba
