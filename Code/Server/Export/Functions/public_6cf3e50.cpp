#include "Server-PCH.h"


#define public_6cf3e9f _public_6cf3e9f
#define public_6cf3ea1 _public_6cf3ea1

PROC_DECLARE(0x6cf3e50, internal_6cf3e50, public_6cf3e50);
extern "C" NAKED register_t __cdecl internal_6cf3e50()
{
    __asm
    {
        push esi
        push edi
        push 0xA7
        mov esi, ecx
        call dword ptr ds : [public_6d64190]
        mov edi, dword ptr ss : [esp+0x10]
        add esp, 4
        push eax
        mov ecx, edi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_6d6418c]
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [public_6d64a5c]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cf3e9f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        je public_6cf3ea1
        public_6cf3e9f : nop
        xor eax, eax
        public_6cf3ea1 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64188]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        setne cl
        pop edi
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf3e50)
    }
}

#undef public_6cf3e9f
#undef public_6cf3ea1
