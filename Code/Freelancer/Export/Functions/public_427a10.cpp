#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a10);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);

#define public_427a3a _public_427a3a

PROC_DECLARE(0x427a10, internal_427a10, public_427a10);
extern "C" NAKED register_t __cdecl internal_427a10()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, esi
        xor bl, bl
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_427a3a
        push esi
        call public_42ae40
        add esp, 4
        test eax, eax
        je public_427a3a
        mov edx, dword ptr ds : [eax]
        pop esi
        mov ecx, eax
        pop ebx
        jmp dword ptr ds : [edx+0xC]
        public_427a3a : nop
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x427a10)
    }
}

#undef public_427a3a
