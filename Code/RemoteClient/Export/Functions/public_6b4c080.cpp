#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4c080);
CLANG_FORWARD_PROC_SYMBOL(public_6b4c0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4c0aa _public_6b4c0aa

PROC_DECLARE(0x6b4c080, internal_6b4c080, public_6b4c080);
extern "C" NAKED register_t __cdecl internal_6b4c080()
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
        je public_6b4c0aa
        mov ecx, eax
        call public_6b4c0c0
        test eax, eax
        je public_6b4c0aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4c0aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4c080)
    }
}

#undef public_6b4c0aa
