#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6b4cbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4cbba _public_6b4cbba

PROC_DECLARE(0x6b4cb90, internal_6b4cb90, public_6b4cb90);
extern "C" NAKED register_t __cdecl internal_6b4cb90()
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
        je public_6b4cbba
        mov ecx, eax
        call public_6b4cbd0
        test eax, eax
        je public_6b4cbba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4cbba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4cb90)
    }
}

#undef public_6b4cbba
