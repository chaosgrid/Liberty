#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_440ac0);
CLANG_FORWARD_PROC_SYMBOL(public_441c40);

#define public_441c68 _public_441c68

PROC_DECLARE(0x441c40, internal_441c40, public_441c40);
extern "C" NAKED register_t __cdecl internal_441c40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 1
        mov byte ptr ds : [esi+0x3CC], 0
        call public_41dda0
        mov eax, dword ptr ds : [esi+0x3B8]
        add esp, 4
        test eax, eax
        je public_441c68
        push eax
        mov ecx, esi
        call public_440ac0
        public_441c68 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x441c40)
    }
}

#undef public_441c68
