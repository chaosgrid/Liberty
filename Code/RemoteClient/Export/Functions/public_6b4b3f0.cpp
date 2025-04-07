#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b430);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b41a _public_6b4b41a

PROC_DECLARE(0x6b4b3f0, internal_6b4b3f0, public_6b4b3f0);
extern "C" NAKED register_t __cdecl internal_6b4b3f0()
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
        je public_6b4b41a
        mov ecx, eax
        call public_6b4b430
        test eax, eax
        je public_6b4b41a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b41a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b3f0)
    }
}

#undef public_6b4b41a
