#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b880);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b8aa _public_6b4b8aa

PROC_DECLARE(0x6b4b880, internal_6b4b880, public_6b4b880);
extern "C" NAKED register_t __cdecl internal_6b4b880()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x48
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b8aa
        mov ecx, eax
        call public_6b4b8c0
        test eax, eax
        je public_6b4b8aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b8aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b880)
    }
}

#undef public_6b4b8aa
