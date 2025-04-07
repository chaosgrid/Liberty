#include "Server-PCH.h"


#define public_6cfbff5 _public_6cfbff5
#define public_6cfc000 _public_6cfc000
#define public_6cfc01c _public_6cfc01c

PROC_DECLARE(0x6cfbfd0, internal_6cfbfd0, public_6cfbfd0);
extern "C" NAKED register_t __cdecl internal_6cfbfd0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8d928]
        test cl, cl
        mov eax, 0xFFFFFFFB
        jne public_6cfc01c
        mov edx, dword ptr ds : [public_6d8d8f8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        push esi
        mov eax, 0xFFFFFFFE
        je public_6cfc000
        mov esi, dword ptr ss : [esp+8]
        public_6cfbff5 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6cfc000
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6cfbff5
        public_6cfc000 : nop
        cmp ecx, edx
        pop esi
        je public_6cfc01c
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0x20]
        push eax
        push edx
        call dword ptr ds : [public_6d6445c]
        add esp, 8
        xor eax, eax
        public_6cfc01c : nop
        ret 
        UNREACHABLE_TRAP(0x6cfbfd0)
    }
}

#undef public_6cfbff5
#undef public_6cfc000
#undef public_6cfc01c
