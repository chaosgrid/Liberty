#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4c230);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c270);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4c25a _public_6b4c25a

PROC_DECLARE(0x6b4c230, internal_6b4c230, public_6b4c230);
extern "C" NAKED register_t __cdecl internal_6b4c230()
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
        je public_6b4c25a
        mov ecx, eax
        call public_6b4c270
        test eax, eax
        je public_6b4c25a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4c25a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4c230)
    }
}

#undef public_6b4c25a
