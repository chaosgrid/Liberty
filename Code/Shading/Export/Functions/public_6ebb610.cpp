#include "Shading-PCH.h"


#define public_6ebb624 _public_6ebb624

PROC_DECLARE(0x6ebb610, internal_6ebb610, public_6ebb610);
extern "C" NAKED register_t __cdecl internal_6ebb610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed22cc
        mov eax, 1
        public_6ebb624 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebb624
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x18
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ebb610)
    }
}

#undef public_6ebb624
