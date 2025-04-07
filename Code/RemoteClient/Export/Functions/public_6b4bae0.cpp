#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bae0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4bb0a _public_6b4bb0a

PROC_DECLARE(0x6b4bae0, internal_6b4bae0, public_6b4bae0);
extern "C" NAKED register_t __cdecl internal_6b4bae0()
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
        je public_6b4bb0a
        mov ecx, eax
        call public_6b4bb20
        test eax, eax
        je public_6b4bb0a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4bb0a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4bae0)
    }
}

#undef public_6b4bb0a
