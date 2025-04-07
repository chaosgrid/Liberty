#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_534190);
CLANG_FORWARD_PROC_SYMBOL(public_539d80);

#define public_5341ca _public_5341ca
#define public_5341cc _public_5341cc
#define public_5341e5 _public_5341e5
#define public_5341f3 _public_5341f3
#define public_53420b _public_53420b

PROC_DECLARE(0x534190, internal_534190, public_534190);
extern "C" NAKED register_t __cdecl internal_534190()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c6910]
        add esp, 4
        test al, al
        je public_5341f3
        test esi, esi
        je public_5341ca
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5341ca
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5341ca
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5341cc
        public_5341ca : nop
        xor eax, eax
        public_5341cc : nop
        push edi
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov edx, dword ptr ds : [esi+0xB8]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_5341f3
        public_5341e5 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [ebx+4], eax
        je public_53420b
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_5341e5
        public_5341f3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push edi
        push ecx
        mov ecx, esi
        call public_539d80
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_53420b : nop
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_5341f3
        mov edx, dword ptr ds : [ecx+4]
        cmp dword ptr ds : [edx+0x14], 0x100
        jne public_5341f3
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call dword ptr ds : [eax+0x18]
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x534190)
    }
}

#undef public_5341ca
#undef public_5341cc
#undef public_5341e5
#undef public_5341f3
#undef public_53420b
