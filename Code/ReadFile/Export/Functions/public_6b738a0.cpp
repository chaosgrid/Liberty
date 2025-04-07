#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76c30);

#define public_6b738c1 _public_6b738c1
#define public_6b738db _public_6b738db
#define public_6b738e8 _public_6b738e8
#define public_6b738f9 _public_6b738f9
#define public_6b7390b _public_6b7390b
#define public_6b73911 _public_6b73911
#define public_6b73930 _public_6b73930
#define public_6b73962 _public_6b73962
#define public_6b73968 _public_6b73968
#define public_6b73978 _public_6b73978
#define public_6b739c5 _public_6b739c5

PROC_DECLARE(0x6b738a0, internal_6b738a0, public_6b738a0);
extern "C" NAKED register_t __cdecl internal_6b738a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        cmp eax, 4
        push edi
        je public_6b738c1
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x1C], 5
        xor eax, eax
        pop ebx
        ret 0x18
        public_6b738c1 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x244]
        lea esi, ss:[ebp+0x240]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b738e8
        mov ebx, dword ptr ss : [esp+0x18]
        public_6b738db : nop
        lea edx, ds:[eax+8]
        cmp edx, ebx
        je public_6b738f9
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6b738db
        public_6b738e8 : nop
        pop edi
        mov dword ptr ss : [ebp+0x1C], 6
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x18
        public_6b738f9 : nop
        mov eax, dword ptr ss : [ebp+0x230]
        test eax, eax
        je public_6b7390b
        mov edi, dword ptr ds : [eax+0x238]
        jmp public_6b73911
        public_6b7390b : nop
        mov edi, dword ptr ss : [ebp+0x238]
        public_6b73911 : nop
        test edi, edi
        je public_6b739c5
        lea eax, ss:[esp+0x14]
        mov ecx, esi
        push eax
        call public_6b76bd0
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        je public_6b73968
        public_6b73930 : nop
        add eax, 8
        cmp eax, ebx
        je public_6b73962
        lea ecx, ss:[esp+0x1C]
        push 0
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6b76c30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jne public_6b73930
        pop edi
        mov dword ptr ss : [ebp+0x1C], 6
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6b73962 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        jne public_6b73978
        public_6b73968 : nop
        pop edi
        mov dword ptr ss : [ebp+0x1C], 6
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        public_6b73978 : nop
        mov eax, dword ptr ss : [ebp+0x230]
        test eax, eax
        je public_6b739c5
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6b739c5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        sub eax, ebx
        cmp ecx, eax
        ja public_6b739c5
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+0x24]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        add edi, eax
        mov eax, dword ptr ss : [ebp+0x230]
        mov eax, dword ptr ds : [eax+0xC]
        add eax, edi
        pop edi
        pop esi
        add eax, ebx
        pop ebp
        pop ebx
        ret 0x18
        public_6b739c5 : nop
        pop edi
        mov dword ptr ss : [ebp+0x1C], 5
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6b738a0)
    }
}

#undef public_6b738c1
#undef public_6b738db
#undef public_6b738e8
#undef public_6b738f9
#undef public_6b7390b
#undef public_6b73911
#undef public_6b73930
#undef public_6b73962
#undef public_6b73968
#undef public_6b73978
#undef public_6b739c5
