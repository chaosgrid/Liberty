#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47110);
CLANG_FORWARD_PROC_SYMBOL(public_6b490c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4713a _public_6b4713a

PROC_DECLARE(0x6b47110, internal_6b47110, public_6b47110);
extern "C" NAKED register_t __cdecl internal_6b47110()
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
        je public_6b4713a
        mov ecx, eax
        call public_6b490c0
        test eax, eax
        je public_6b4713a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4713a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47110)
    }
}

#undef public_6b4713a
