#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_559860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_559872 _public_559872
#define public_559880 _public_559880

PROC_DECLARE(0x559860, internal_559860, public_559860);
extern "C" NAKED register_t __cdecl internal_559860()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_679a48]
        push edi
        mov edi, dword ptr ds : [public_679a4c]
        cmp esi, edi
        je public_559880
        public_559872 : nop
        mov ecx, esi
        call public_4dd9a0
        add esi, 0x24
        cmp esi, edi
        jne public_559872
        public_559880 : nop
        mov eax, dword ptr ds : [public_679a48]
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_679a48], eax
        mov dword ptr ds : [public_679a4c], eax
        mov dword ptr ds : [public_679a50], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x559860)
    }
}

#undef public_559872
#undef public_559880
