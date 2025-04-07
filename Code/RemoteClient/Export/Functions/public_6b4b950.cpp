#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b950);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b990);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b97a _public_6b4b97a

PROC_DECLARE(0x6b4b950, internal_6b4b950, public_6b4b950);
extern "C" NAKED register_t __cdecl internal_6b4b950()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x3C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b97a
        mov ecx, eax
        call public_6b4b990
        test eax, eax
        je public_6b4b97a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b97a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b950)
    }
}

#undef public_6b4b97a
