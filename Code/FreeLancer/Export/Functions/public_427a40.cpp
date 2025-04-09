#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_427a40);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);

#define public_427a66 _public_427a66

PROC_DECLARE(0x427a40, internal_427a40, public_427a40);
extern "C" NAKED register_t __cdecl internal_427a40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_427a66
        push esi
        call public_42ae40
        add esp, 4
        test eax, eax
        je public_427a66
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        pop esi
        jmp dword ptr ds : [edx+0x10]
        public_427a66 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x427a40)
    }
}

#undef public_427a66
