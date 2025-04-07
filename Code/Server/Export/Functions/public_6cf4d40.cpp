#include "Server-PCH.h"


#define public_6cf4d89 _public_6cf4d89
#define public_6cf4d8b _public_6cf4d8b

PROC_DECLARE(0x6cf4d40, internal_6cf4d40, public_6cf4d40);
extern "C" NAKED register_t __cdecl internal_6cf4d40()
{
    __asm
    {
        push esi
        push edi
        push 0x67
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
        je public_6cf4d89
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_6cf4d8b
        public_6cf4d89 : nop
        xor eax, eax
        public_6cf4d8b : nop
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
        UNREACHABLE_TRAP(0x6cf4d40)
    }
}

#undef public_6cf4d89
#undef public_6cf4d8b
