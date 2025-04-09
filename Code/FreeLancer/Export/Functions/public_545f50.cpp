#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_5339e0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_553250);

#define public_545f9a _public_545f9a
#define public_545f9c _public_545f9c
#define public_545fb2 _public_545fb2
#define public_545fe6 _public_545fe6
#define public_545fe8 _public_545fe8
#define public_546013 _public_546013
#define public_54603b _public_54603b

PROC_DECLARE(0x545f50, internal_545f50, public_545f50);
extern "C" NAKED register_t __cdecl internal_545f50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi+0x10], 6
        mov esi, ecx
        jne public_545fb2
        call public_54baf0
        cmp esi, eax
        jne public_545fb2
        mov edx, dword ptr ds : [public_673344]
        mov eax, dword ptr ds : [esi+4]
        push edx
        lea ecx, ds:[esi+4]
        push 1
        push 0
        call dword ptr ds : [eax+0x50]
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_545f9a
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_545f9a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_545f9c
        public_545f9a : nop
        xor eax, eax
        public_545f9c : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_545fb2
        push 0
        mov ecx, eax
        call dword ptr ds : [public_5c647c]
        public_545fb2 : nop
        push edi
        mov ecx, esi
        call public_5339e0
        call public_54baf0
        cmp esi, eax
        jne public_54603b
        test esi, esi
        je public_545fe6
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_545fe6
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_545fe6
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_545fe8
        public_545fe6 : nop
        xor eax, eax
        public_545fe8 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6504]
        fcomp dword ptr ds : [public_5dfb40]
        fnstsw ax
        test ah, 1
        jne public_546013
        push edi
        push esi
        mov byte ptr ds : [esi+0x154], 0
        call public_553250
        add esp, 8
        pop edi
        pop esi
        ret 4
        public_546013 : nop
        mov al, byte ptr ds : [esi+0x154]
        test al, al
        jne public_54603b
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        jne public_54603b
        mov byte ptr ds : [esi+0x154], 1
        mov eax, dword ptr ds : [public_678b50]
        push 0
        push eax
        call public_489e80
        add esp, 8
        public_54603b : nop
        push edi
        push esi
        call public_553250
        add esp, 8
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x545f50)
    }
}

#undef public_545f9a
#undef public_545f9c
#undef public_545fb2
#undef public_545fe6
#undef public_545fe8
#undef public_546013
#undef public_54603b
