#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627d480 _public_627d480
#define public_627d492 _public_627d492

PROC_DECLARE(0x627d470, internal_627d470, public_627d470);
extern "C" NAKED register_t __cdecl internal_627d470()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc01c]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_627d492
        push esi
        lea ecx, ds:[ecx]
        public_627d480 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_627d480
        pop esi
        public_627d492 : nop
        mov dword ptr ds : [public_63fc01c], edi
        mov dword ptr ds : [public_63fc028], edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x627d470)
    }
}

#undef public_627d480
#undef public_627d492
