#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4db90);
CLANG_FORWARD_PROC_SYMBOL(public_6b4dbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4dbba _public_6b4dbba

PROC_DECLARE(0x6b4db90, internal_6b4db90, public_6b4db90);
extern "C" NAKED register_t __cdecl internal_6b4db90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4dbba
        mov ecx, eax
        call public_6b4dbd0
        test eax, eax
        je public_6b4dbba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4dbba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4db90)
    }
}

#undef public_6b4dbba
