#include "FLMaterials-PCH.h"


#define public_66f1d95 _public_66f1d95

PROC_DECLARE(0x66f1d40, internal_66f1d40, public_66f1d40);
extern "C" NAKED register_t __cdecl internal_66f1d40()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x6C]
        mov ebx, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        jbe public_66f1d95
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        mov esi, ebx
        imul esi, 0x4C
        push eax
        lea eax, ds:[esi+ecx]
        push eax
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x64]
        test al, al
        je public_66f1d95
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push eax
        add esi, ecx
        push esi
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x68]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1d95 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f1d40)
    }
}

#undef public_66f1d95
