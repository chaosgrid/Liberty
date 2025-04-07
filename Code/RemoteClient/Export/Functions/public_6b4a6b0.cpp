#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4a6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4a6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4a6da _public_6b4a6da

PROC_DECLARE(0x6b4a6b0, internal_6b4a6b0, public_6b4a6b0);
extern "C" NAKED register_t __cdecl internal_6b4a6b0()
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
        je public_6b4a6da
        mov ecx, eax
        call public_6b4a6f0
        test eax, eax
        je public_6b4a6da
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4a6da : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4a6b0)
    }
}

#undef public_6b4a6da
