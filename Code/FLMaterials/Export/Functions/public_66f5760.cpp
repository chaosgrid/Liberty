#include "FLMaterials-PCH.h"


#define public_66f57a1 _public_66f57a1
#define public_66f57b0 _public_66f57b0
#define public_66f57d7 _public_66f57d7

PROC_DECLARE(0x66f5760, internal_66f5760, public_66f5760);
extern "C" NAKED register_t __cdecl internal_66f5760()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push edi
        lea ebp, ds:[ebx+0x20]
        push ebp
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_66f57a1
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_66f57a1
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66f57a1
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [edx+0xF0]
        public_66f57a1 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_67018a0
        mov eax, 1
        mov edi, edi
        public_66f57b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f57b0
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701880
        mov eax, 0x89
        public_66f57d7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f57d7
        mov ebx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push ebx
        call dword ptr ds : [eax+0xAC]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f5760)
    }
}

#undef public_66f57a1
#undef public_66f57b0
#undef public_66f57d7
