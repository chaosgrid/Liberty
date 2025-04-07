#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627eab0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627eac0 _public_627eac0
#define public_627ead2 _public_627ead2

PROC_DECLARE(0x627eab0, internal_627eab0, public_627eab0);
extern "C" NAKED register_t __cdecl internal_627eab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc420]
        push edi
        xor edi, edi
        cmp eax, edi
        je public_627ead2
        push esi
        lea ecx, ds:[ecx]
        public_627eac0 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_627eac0
        pop esi
        public_627ead2 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        pop edi
        ret 
        UNREACHABLE_TRAP(0x627eab0)
    }
}

#undef public_627eac0
#undef public_627ead2
