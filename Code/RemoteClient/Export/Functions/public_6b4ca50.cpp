#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ca90);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4ca7a _public_6b4ca7a

PROC_DECLARE(0x6b4ca50, internal_6b4ca50, public_6b4ca50);
extern "C" NAKED register_t __cdecl internal_6b4ca50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4ca7a
        mov ecx, eax
        call public_6b4ca90
        test eax, eax
        je public_6b4ca7a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4ca7a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4ca50)
    }
}

#undef public_6b4ca7a
