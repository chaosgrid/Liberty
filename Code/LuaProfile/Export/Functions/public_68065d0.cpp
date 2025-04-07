#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_68065e9 _public_68065e9
#define public_680660c _public_680660c

PROC_DECLARE(0x68065d0, internal_68065d0, public_68065d0);
extern "C" NAKED register_t __cdecl internal_68065d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_68065e9
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_680c018]
        add esp, 4
        xor eax, eax
        ret 
        public_68065e9 : nop
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push eax
        push ecx
        call dword ptr ds : [public_680c078]
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_680660c
/*FIXUP push offset public_680da14 @0x68065ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da14
        call public_6802e00
        add esp, 4
        public_680660c : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68065d0)
    }
}

#undef public_68065e9
#undef public_680660c
