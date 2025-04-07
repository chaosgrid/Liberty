#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b47bfd _public_6b47bfd

PROC_DECLARE(0x6b47bd0, internal_6b47bd0, public_6b47bd0);
extern "C" NAKED register_t __cdecl internal_6b47bd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x424
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b47bfd
        mov ecx, eax
        call public_6b48b60
        test eax, eax
        je public_6b47bfd
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b47bfd : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47bd0)
    }
}

#undef public_6b47bfd
