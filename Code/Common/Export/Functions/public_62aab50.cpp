#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_62aab50);

#define public_62aab70 _public_62aab70
#define public_62aac1c _public_62aac1c
#define public_62aac5f _public_62aac5f
#define public_62aaccf _public_62aaccf
#define public_62aad0a _public_62aad0a
#define public_62aad0c _public_62aad0c
#define public_62aad13 _public_62aad13
#define public_62aad24 _public_62aad24

PROC_DECLARE(0x62aab50, internal_62aab50, public_62aab50);
extern "C" NAKED register_t __cdecl internal_62aab50()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x184]
        cmp esi, dword ptr ds : [edi+0x188]
        je public_62aad24
        lea esp, ss:[esp]
        public_62aab70 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_62aad13
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        fld dword ptr ss : [esp+0xC]
        cmp byte ptr ds : [esi], 0
        je public_62aac5f
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62aad0c
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62aac1c
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0xB]
        push ecx
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x13], 1
        call dword ptr ds : [eax+0xC8]
        mov edx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_627d8a0
        add esp, 4
        jmp public_62aad0c
        public_62aac1c : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jp public_62aad0c
        mov ecx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        jmp public_62aad0c
        public_62aac5f : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62aad0a
        fld dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62aaccf
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0xB]
        push eax
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [edx+0xC8]
        mov ecx, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xBF800000
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_627d8a0
        add esp, 4
        jmp public_62aad0c
        public_62aaccf : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 1
        jne public_62aad0c
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x3F800000
        push 0x3F800000
        push 0
        push 0x3F800000
        push 0xC0000000
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        jmp public_62aad0c
        public_62aad0a : nop
        fstp st(0)
        public_62aad0c : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], eax
        public_62aad13 : nop
        mov eax, dword ptr ds : [edi+0x188]
        add esi, 0x10
        cmp esi, eax
        jne public_62aab70
        public_62aad24 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62aab50)
    }
}

#undef public_62aab70
#undef public_62aac1c
#undef public_62aac5f
#undef public_62aaccf
#undef public_62aad0a
#undef public_62aad0c
#undef public_62aad13
#undef public_62aad24
