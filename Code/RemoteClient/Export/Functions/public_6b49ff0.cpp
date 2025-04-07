#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4a030);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4a01a _public_6b4a01a

PROC_DECLARE(0x6b49ff0, internal_6b49ff0, public_6b49ff0);
extern "C" NAKED register_t __cdecl internal_6b49ff0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4a01a
        mov ecx, eax
        call public_6b4a030
        test eax, eax
        je public_6b4a01a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4a01a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b49ff0)
    }
}

#undef public_6b4a01a
