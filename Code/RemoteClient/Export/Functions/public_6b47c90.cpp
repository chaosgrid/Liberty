#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47c90);
CLANG_FORWARD_PROC_SYMBOL(public_6b48c80);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b47cba _public_6b47cba

PROC_DECLARE(0x6b47c90, internal_6b47c90, public_6b47c90);
extern "C" NAKED register_t __cdecl internal_6b47c90()
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
        je public_6b47cba
        mov ecx, eax
        call public_6b48c80
        test eax, eax
        je public_6b47cba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b47cba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47c90)
    }
}

#undef public_6b47cba
