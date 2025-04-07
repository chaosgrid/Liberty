#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6ec438f _public_6ec438f
#define public_6ec439d _public_6ec439d
#define public_6ec43ab _public_6ec43ab
#define public_6ec43ba _public_6ec43ba
#define public_6ec43cf _public_6ec43cf
#define public_6ec43d7 _public_6ec43d7

PROC_DECLARE(0x6ec4350, internal_6ec4350, public_6ec4350);
extern "C" NAKED register_t __cdecl internal_6ec4350()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0xC]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0x1B0
        xor bl, bl
        call public_6f7b0f0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [edx+0x1B4]
        je public_6ec43d7
        mov esi, dword ptr ds : [esi+0x10]
        cmp esi, dword ptr ds : [public_6fcefc4]
        jne public_6ec438f
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6ec43cf
        public_6ec438f : nop
        cmp esi, dword ptr ds : [public_6fcefc0]
        jne public_6ec439d
        cmp dword ptr ds : [eax+0x10], 1
        je public_6ec43cf
        public_6ec439d : nop
        cmp esi, dword ptr ds : [public_6fcefbc]
        jne public_6ec43ab
        cmp dword ptr ds : [eax+0x10], 2
        je public_6ec43cf
        public_6ec43ab : nop
        cmp esi, dword ptr ds : [public_6fcefb8]
        jne public_6ec43ba
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6ec43cf
        public_6ec43ba : nop
        cmp esi, dword ptr ds : [public_6fcefb4]
        jne public_6ec43d7
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, 1
        je public_6ec43cf
        cmp eax, 2
        jne public_6ec43d7
        public_6ec43cf : nop
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6ec43d7 : nop
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec4350)
    }
}

#undef public_6ec438f
#undef public_6ec439d
#undef public_6ec43ab
#undef public_6ec43ba
#undef public_6ec43cf
#undef public_6ec43d7
