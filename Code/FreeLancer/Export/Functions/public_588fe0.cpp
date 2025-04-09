#include "FreeLancer-PCH.h"


#define public_589024 _public_589024
#define public_589034 _public_589034
#define public_58903c _public_58903c

PROC_DECLARE(0x588fe0, internal_588fe0, public_588fe0);
extern "C" NAKED register_t __cdecl internal_588fe0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [ebx], 0xFFFFFFFF
        push edi
        mov edi, ecx
        jne public_58903c
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        push esi
        je public_589034
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_589034
        cmp dword ptr ds : [ebx+4], 3
        mov ebx, dword ptr ds : [esi]
        mov ecx, edi
        push 0
        jne public_589024
        mov edx, dword ptr ds : [edi]
        call dword ptr ds : [edx+8]
        push eax
        push 0x1B
        mov ecx, esi
        call dword ptr ds : [ebx+0xA8]
        pop esi
        pop edi
        mov al, 1
        pop ebx
        ret 4
        public_589024 : nop
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+8]
        push eax
        push 0x1A
        mov ecx, esi
        call dword ptr ds : [ebx+0xA8]
        public_589034 : nop
        pop esi
        pop edi
        mov al, 1
        pop ebx
        ret 4
        public_58903c : nop
        pop edi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x588fe0)
    }
}

#undef public_589024
#undef public_589034
#undef public_58903c
