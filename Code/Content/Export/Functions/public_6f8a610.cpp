#include "Content-PCH.h"


#define public_6f8a644 _public_6f8a644
#define public_6f8a664 _public_6f8a664

PROC_DECLARE(0x6f8a610, internal_6f8a610, public_6f8a610);
extern "C" NAKED register_t __cdecl internal_6f8a610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [eax], 1
        push esi
        push edi
        jne public_6f8a664
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6f8a664
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, 0xFFFFFFFF
        je public_6f8a644
        mov ecx, ebx
        call dword ptr ds : [public_6fb3124]
        cmp eax, esi
        jne public_6f8a664
        public_6f8a644 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [public_6fd3bbc]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6f8a664
        push 2
        mov ecx, ebx
        call dword ptr ds : [public_6fb3120]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f8a664 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f8a610)
    }
}

#undef public_6f8a644
#undef public_6f8a664
