#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cee0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4cf20);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4cf0a _public_6b4cf0a

PROC_DECLARE(0x6b4cee0, internal_6b4cee0, public_6b4cee0);
extern "C" NAKED register_t __cdecl internal_6b4cee0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4cf0a
        mov ecx, eax
        call public_6b4cf20
        test eax, eax
        je public_6b4cf0a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4cf0a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4cee0)
    }
}

#undef public_6b4cf0a
