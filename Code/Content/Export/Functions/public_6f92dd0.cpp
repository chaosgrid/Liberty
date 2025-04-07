#include "Content-PCH.h"


#define public_6f92e14 _public_6f92e14
#define public_6f92e3b _public_6f92e3b
#define public_6f92e42 _public_6f92e42

PROC_DECLARE(0x6f92dd0, internal_6f92dd0, public_6f92dd0);
extern "C" NAKED register_t __cdecl internal_6f92dd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 1
        jne public_6f92e42
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f92e14
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f92e14
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        cmp eax, dword ptr ds : [edi+0x44]
        jg public_6f92e3b
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f92e14 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f92e42
        cmp dword ptr ds : [esi+8], 0x39
        jne public_6f92e42
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        cmp eax, dword ptr ds : [edi+0x44]
        jg public_6f92e3b
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        public_6f92e3b : nop
        pop edi
        mov al, 1
        pop esi
        ret 8
        public_6f92e42 : nop
        pop edi
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f92dd0)
    }
}

#undef public_6f92e14
#undef public_6f92e3b
#undef public_6f92e42
