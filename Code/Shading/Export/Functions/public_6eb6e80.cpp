#include "Shading-PCH.h"


#define public_6eb6e94 _public_6eb6e94

PROC_DECLARE(0x6eb6e80, internal_6eb6e80, public_6eb6e80);
extern "C" NAKED register_t __cdecl internal_6eb6e80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed194c
        mov eax, 1
        public_6eb6e94 : nop
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
        jne public_6eb6e94
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
        UNREACHABLE_TRAP(0x6eb6e80)
    }
}

#undef public_6eb6e94
