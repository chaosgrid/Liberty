#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_552df0 _public_552df0
#define public_552e22 _public_552e22

PROC_DECLARE(0x552de0, internal_552de0, public_552de0);
extern "C" NAKED register_t __cdecl internal_552de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6798c8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_552e22
        nop 
        public_552df0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_6798cc]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6798cc], ecx
        jne public_552df0
        mov eax, dword ptr ds : [public_6798c8]
        public_552e22 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6798c8], eax
        mov dword ptr ds : [public_6798cc], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x552de0)
    }
}

#undef public_552df0
#undef public_552e22
