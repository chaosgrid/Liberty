#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47850);
CLANG_FORWARD_PROC_SYMBOL(public_6b485d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4787a _public_6b4787a

PROC_DECLARE(0x6b47850, internal_6b47850, public_6b47850);
extern "C" NAKED register_t __cdecl internal_6b47850()
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
        je public_6b4787a
        mov ecx, eax
        call public_6b485d0
        test eax, eax
        je public_6b4787a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4787a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47850)
    }
}

#undef public_6b4787a
