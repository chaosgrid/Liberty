#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4d260);
CLANG_FORWARD_PROC_SYMBOL(public_6b4d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4d28a _public_6b4d28a

PROC_DECLARE(0x6b4d260, internal_6b4d260, public_6b4d260);
extern "C" NAKED register_t __cdecl internal_6b4d260()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x38
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4d28a
        mov ecx, eax
        call public_6b4d2a0
        test eax, eax
        je public_6b4d28a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4d28a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4d260)
    }
}

#undef public_6b4d28a
