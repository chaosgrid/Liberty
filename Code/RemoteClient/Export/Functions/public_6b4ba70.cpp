#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ba70);
CLANG_FORWARD_PROC_SYMBOL(public_6b4bab0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4ba9a _public_6b4ba9a

PROC_DECLARE(0x6b4ba70, internal_6b4ba70, public_6b4ba70);
extern "C" NAKED register_t __cdecl internal_6b4ba70()
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
        je public_6b4ba9a
        mov ecx, eax
        call public_6b4bab0
        test eax, eax
        je public_6b4ba9a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4ba9a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4ba70)
    }
}

#undef public_6b4ba9a
