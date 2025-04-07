#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b39365 _public_6b39365
#define public_6b3937a _public_6b3937a
#define public_6b3937d _public_6b3937d
#define public_6b393bf _public_6b393bf
#define public_6b393d0 _public_6b393d0

PROC_DECLARE(0x6b39350, internal_6b39350, public_6b39350);
extern "C" NAKED register_t __cdecl internal_6b39350()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x68]
        test eax, eax
        push esi
        jne public_6b3937d
        xor edx, edx
        mov esi, offset public_6b73b38
        mov eax, 0x10
        public_6b39365 : nop
        cmp dword ptr ds : [esi], 0
        je public_6b393d0
        add eax, 4
        inc edx
        add esi, 4
        cmp eax, 0x210
        jb public_6b39365
        xor eax, eax
        public_6b3937a : nop
        mov dword ptr ds : [ecx+0x68], eax
        public_6b3937d : nop
        mov edx, dword ptr ds : [public_6b73d38]
        mov esi, dword ptr ds : [ecx+0x68]
        mov ecx, dword ptr ds : [public_6b73b30]
        lea eax, ss:[esp+4]
        push eax
        push 1
        inc edx
        push 2
        mov dword ptr ds : [public_6b73d38], edx
        call public_6b3b480
        test eax, eax
        jne public_6b393bf
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], esi
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_6b73b28]
        push edx
        push esi
        mov ecx, offset public_6b73b28
        call dword ptr ds : [eax+0x24]
        public_6b393bf : nop
        mov ecx, dword ptr ds : [public_6b73d48]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x44]
        pop esi
        pop ecx
        ret 4
        public_6b393d0 : nop
        mov dword ptr ds : [edx*4+public_6b73b38], ecx
        lea eax, ds:[edx+1]
        jmp public_6b3937a
        UNREACHABLE_TRAP(0x6b39350)
    }
}

#undef public_6b39365
#undef public_6b3937a
#undef public_6b3937d
#undef public_6b393bf
#undef public_6b393d0
