#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47290);
CLANG_FORWARD_PROC_SYMBOL(public_6b48050);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b472ba _public_6b472ba

PROC_DECLARE(0x6b47290, internal_6b47290, public_6b47290);
extern "C" NAKED register_t __cdecl internal_6b47290()
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
        je public_6b472ba
        mov ecx, eax
        call public_6b48050
        test eax, eax
        je public_6b472ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b472ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47290)
    }
}

#undef public_6b472ba
