#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b620);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b60a _public_6b4b60a

PROC_DECLARE(0x6b4b5e0, internal_6b4b5e0, public_6b4b5e0);
extern "C" NAKED register_t __cdecl internal_6b4b5e0()
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
        je public_6b4b60a
        mov ecx, eax
        call public_6b4b620
        test eax, eax
        je public_6b4b60a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b60a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b5e0)
    }
}

#undef public_6b4b60a
