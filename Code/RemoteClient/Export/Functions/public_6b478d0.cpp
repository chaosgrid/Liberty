#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b478d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b48690);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b478fa _public_6b478fa

PROC_DECLARE(0x6b478d0, internal_6b478d0, public_6b478d0);
extern "C" NAKED register_t __cdecl internal_6b478d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b478fa
        mov ecx, eax
        call public_6b48690
        test eax, eax
        je public_6b478fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b478fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b478d0)
    }
}

#undef public_6b478fa
