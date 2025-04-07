#include "FLMaterials-PCH.h"


#define public_66fc074 _public_66fc074
#define public_66fc0b0 _public_66fc0b0

PROC_DECLARE(0x66fc060, internal_66fc060, public_66fc060);
extern "C" NAKED register_t __cdecl internal_66fc060()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6702878
        mov eax, 0x89
        public_66fc074 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66fc074
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x108]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_67028a8
        mov eax, 1
        lea esp, ss:[esp]
        public_66fc0b0 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66fc0b0
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66fc060)
    }
}

#undef public_66fc074
#undef public_66fc0b0
