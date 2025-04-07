#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_429f8c _public_429f8c
#define public_429fbb _public_429fbb
#define public_429fed _public_429fed
#define public_42a00d _public_42a00d

PROC_DECLARE(0x429f60, internal_429f60, public_429f60);
extern "C" NAKED register_t __cdecl internal_429f60()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_429f8c
        fld dword ptr ds : [edi+0x58]
        fcomp dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 5
        jp public_42a00d
        public_429f8c : nop
        mov ecx, dword ptr ds : [edi+0x60]
        cmp ecx, 0xFFFFFFFF
        je public_429fed
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_667c98]
        test eax, eax
        jne public_429fbb
        call public_5b73e0
        mov dword ptr ds : [public_667c98], eax
        public_429fbb : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x3C
        push edi
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop edi
        add esp, 0xC
        ret 8
        public_429fed : nop
        mov edx, dword ptr ss : [esp+0x18]
        add edi, 0x3C
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        pop edi
        add esp, 0xC
        ret 8
        public_42a00d : nop
        mov eax, 0xFFFFFFF9
        pop edi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x429f60)
    }
}

#undef public_429f8c
#undef public_429fbb
#undef public_429fed
#undef public_42a00d
