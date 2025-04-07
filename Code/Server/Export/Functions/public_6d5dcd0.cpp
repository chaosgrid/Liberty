#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5dcff _public_6d5dcff

PROC_DECLARE(0x6d5dcd0, internal_6d5dcd0, public_6d5dcd0);
extern "C" NAKED register_t __cdecl internal_6d5dcd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6d5dcff
        push eax
        call dword ptr ds : [public_6d644dc]
        add esp, 4
        test eax, eax
        je public_6d5dcff
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_6d649d0]
        mov al, 1
        ret 
        public_6d5dcff : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6d5dcd0)
    }
}

#undef public_6d5dcff
