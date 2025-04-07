#include "Server-PCH.h"


#define public_6d01fe1 _public_6d01fe1
#define public_6d01fec _public_6d01fec

PROC_DECLARE(0x6d01f90, internal_6d01f90, public_6d01f90);
extern "C" NAKED register_t __cdecl internal_6d01f90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        call dword ptr ds : [public_6d641d8]
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        je public_6d01fec
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64024]
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_6d01fe1
        mov edx, dword ptr ds : [esi]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+8]
        push 0
        push 1
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x4C]
        public_6d01fe1 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ebx
        call dword ptr ds : [public_6d645d0]
        pop edi
        public_6d01fec : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d01f90)
    }
}

#undef public_6d01fe1
#undef public_6d01fec
