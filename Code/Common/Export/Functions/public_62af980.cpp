#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af980);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62af990 _public_62af990
#define public_62af9a2 _public_62af9a2

PROC_DECLARE(0x62af980, internal_62af980, public_62af980);
extern "C" NAKED register_t __cdecl internal_62af980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc434]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_62af9a2
        push esi
        lea ecx, ds:[ecx]
        public_62af990 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62af990
        pop esi
        public_62af9a2 : nop
        mov dword ptr ds : [public_63fc434], edi
        mov dword ptr ds : [public_63fc440], edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x62af980)
    }
}

#undef public_62af990
#undef public_62af9a2
