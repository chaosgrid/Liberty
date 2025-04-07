#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e540);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e580);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4e56a _public_6b4e56a

PROC_DECLARE(0x6b4e540, internal_6b4e540, public_6b4e540);
extern "C" NAKED register_t __cdecl internal_6b4e540()
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
        je public_6b4e56a
        mov ecx, eax
        call public_6b4e580
        test eax, eax
        je public_6b4e56a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4e56a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4e540)
    }
}

#undef public_6b4e56a
