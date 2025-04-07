#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49e90);
CLANG_FORWARD_PROC_SYMBOL(public_6b49ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b49eba _public_6b49eba

PROC_DECLARE(0x6b49e90, internal_6b49e90, public_6b49e90);
extern "C" NAKED register_t __cdecl internal_6b49e90()
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
        je public_6b49eba
        mov ecx, eax
        call public_6b49ed0
        test eax, eax
        je public_6b49eba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b49eba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b49e90)
    }
}

#undef public_6b49eba
