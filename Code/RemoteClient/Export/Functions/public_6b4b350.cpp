#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b350);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b390);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b37a _public_6b4b37a

PROC_DECLARE(0x6b4b350, internal_6b4b350, public_6b4b350);
extern "C" NAKED register_t __cdecl internal_6b4b350()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b37a
        mov ecx, eax
        call public_6b4b390
        test eax, eax
        je public_6b4b37a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b37a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b350)
    }
}

#undef public_6b4b37a
