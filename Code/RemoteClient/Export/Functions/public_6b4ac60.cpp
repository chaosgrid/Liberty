#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ac60);
CLANG_FORWARD_PROC_SYMBOL(public_6b4aca0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4ac8d _public_6b4ac8d

PROC_DECLARE(0x6b4ac60, internal_6b4ac60, public_6b4ac60);
extern "C" NAKED register_t __cdecl internal_6b4ac60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB4
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4ac8d
        mov ecx, eax
        call public_6b4aca0
        test eax, eax
        je public_6b4ac8d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4ac8d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4ac60)
    }
}

#undef public_6b4ac8d
