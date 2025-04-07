#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803900);
CLANG_FORWARD_PROC_SYMBOL(public_6803930);
CLANG_FORWARD_PROC_SYMBOL(public_6803950);

#define public_680390d _public_680390d
#define public_6803927 _public_6803927
#define public_680392d _public_680392d

PROC_DECLARE(0x6803900, internal_6803900, public_6803900);
extern "C" NAKED register_t __cdecl internal_6803900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push esi
        mov esi, dword ptr ds : [eax+0x58]
        test esi, esi
        je public_680392d
        public_680390d : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, 0xFFFFFFFA
        lea eax, ds:[esi+0x10]
        je public_6803927
        push eax
        call public_6803950
        push esi
        call public_6803930
        add esp, 8
        public_6803927 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_680390d
        public_680392d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6803900)
    }
}

#undef public_680390d
#undef public_6803927
#undef public_680392d
