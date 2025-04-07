#include "Server-PCH.h"


#define public_6cf246a _public_6cf246a
#define public_6cf246c _public_6cf246c

PROC_DECLARE(0x6cf2440, internal_6cf2440, public_6cf2440);
extern "C" NAKED register_t __cdecl internal_6cf2440()
{
    __asm
    {
        push esi
        push edi
        push 0x803
        mov esi, ecx
        call dword ptr ds : [public_6d64190]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0x10], eax
        je public_6cf246a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf246c
        public_6cf246a : nop
        xor eax, eax
        public_6cf246c : nop
        mov edi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        push 1
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64188]
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d6418c]
        mov ecx, dword ptr ds : [public_6d64a5c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        xor ecx, ecx
        cmp eax, 0xFFFFFFFF
        setne cl
        pop edi
        mov al, cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf2440)
    }
}

#undef public_6cf246a
#undef public_6cf246c
