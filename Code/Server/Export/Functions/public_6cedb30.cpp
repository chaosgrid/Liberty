#include "Server-PCH.h"


#define public_6cedb51 _public_6cedb51
#define public_6cedb53 _public_6cedb53
#define public_6cedb81 _public_6cedb81
#define public_6cedb97 _public_6cedb97

PROC_DECLARE(0x6cedb30, internal_6cedb30, public_6cedb30);
extern "C" NAKED register_t __cdecl internal_6cedb30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x19
        push esi
        mov esi, ecx
        jne public_6cedb81
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6cedb51
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cedb53
        public_6cedb51 : nop
        xor eax, eax
        public_6cedb53 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6cedb97
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [eax+8]
        push 0xFFFFFFFF
        push 0
        add ecx, 4
        push 1
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [eax+0x34]
        pop esi
        ret 8
        public_6cedb81 : nop
        cmp eax, 0xA
        jne public_6cedb97
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_6d64330]
        mov dword ptr ds : [esi+4], 0
        public_6cedb97 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cedb30)
    }
}

#undef public_6cedb51
#undef public_6cedb53
#undef public_6cedb81
#undef public_6cedb97
